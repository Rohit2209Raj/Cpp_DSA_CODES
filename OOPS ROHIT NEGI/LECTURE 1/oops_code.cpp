#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
using namespace std;

class Student {
protected:
    string name;
    float attendance, assignmentScore, examScore;
public:
    Student(string n, float a, float as, float es) : name(n), attendance(a), assignmentScore(as), examScore(es) {
        if (a < 0 || a > 100 || as < 0 || as > 100 || es < 0 || es > 100)
            throw invalid_argument("Scores must be between 0 and 100.");
    }
    virtual float calculatePerformance() const = 0;
    friend float calculateFinalPerformance(const Student &s);
    bool operator>(const Student &other) const {
        return calculatePerformance() > other.calculatePerformance();
    }
    string getName() const { return name; }
};

class ScienceStudent : public Student {
public:
    using Student::Student;
    float calculatePerformance() const override {
        return (attendance * 0.2f) + (assignmentScore * 0.3f) + (examScore * 0.5f);
    }
};

class ArtsStudent : public Student {
public:
    using Student::Student;
    float calculatePerformance() const override {
        return (attendance * 0.3f) + (assignmentScore * 0.4f) + (examScore * 0.3f);
    }
};

float calculateFinalPerformance(const Student &s) {
    return s.calculatePerformance();
}

void savePredictionToFile(const Student &s) {
    ofstream file("predictions.txt", ios::app);
    if (file)
        file << "Student: " << s.getName()
             << ", Performance Score: " << calculateFinalPerformance(s) << endl;
}

int main() {
    vector<Student*> students;
    int numStudents;

    cout << "Enter number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        float attendance, assignmentScore, examScore;
        char type;

        cout << "\nEnter student type (S for Science, A for Arts): ";
        cin >> type;
        cout << "Enter name: ";
        cin.ignore(); // Clear newline character from buffer
        getline(cin, name);
        cout << "Enter attendance (%): ";
        cin >> attendance;
        cout << "Enter assignment score (%): ";
        cin >> assignmentScore;
        cout << "Enter exam score (%): ";
        cin >> examScore;

        try {
            if (type == 'S' || type == 's')
                students.push_back(new ScienceStudent(name, attendance, assignmentScore, examScore));
            else if (type == 'A' || type == 'a')
                students.push_back(new ArtsStudent(name, attendance, assignmentScore, examScore));
            else
                cout << "Invalid type entered. Skipping student.\n";
        } catch (const exception &e) {
            cout << "Error: " << e.what() << "\nSkipping this student.\n";
        }
    }

    cout << "\n--- Performance Report ---\n";
    for (const auto &s : students) {
        cout << "Student: " << s->getName()
             << ", Performance Score: " << calculateFinalPerformance(*s) << endl;
        savePredictionToFile(*s);
    }

    if (students.size() >= 2) {
        if (*students[0] > *students[1])
            cout << students[0]->getName() << " has a higher performance than " << students[1]->getName() << endl;
        else
            cout << students[1]->getName() << " has a higher performance than " << students[0]->getName() << endl;
    }

    for (auto &s : students) delete s;
    return 0;
}
