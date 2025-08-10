#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Candidate {
public:
    string name;
    int experience;
    string skills[5];
    int skillCount;
    bool certified;

    // Constructor
    Candidate(string n, int exp, string skl[], int sc, bool cert) {
        if (exp < 0) {
            throw "Experience cannot be negative!";
        }
        name = n;
        experience = exp;
        skillCount = sc;
        for (int i = 0; i < sc; i++) {
            skills[i] = skl[i];
        }
        certified = cert;
    }

    // Filter by experience
    bool filter(int minExp) {
        return experience >= minExp;
    }

    // Filter by skill
    bool filter(string skillName) {
        for (int i = 0; i < skillCount; i++) {
            if (skills[i] == skillName) {
                return true;
            }
        }
        return false;
    }

    // Filter by experience and skill
    bool filter(int minExp, string skillName) {
        return filter(minExp) && filter(skillName);
    }
};

// Save shortlisted candidates to a file
void saveToFile(Candidate* list[], int count) {
    ofstream file("shortlisted.txt");
    for (int i = 0; i < count; i++) {
        file << "Name: " << list[i]->name
             << ", Experience: " << list[i]->experience
             << ", Certified: " << (list[i]->certified ? "Yes" : "No") << endl;
    }
    file.close();
}

int main() {
    int n;
    cout << "Enter number of candidates: ";
    cin >> n;

    Candidate* candidates[100];
    Candidate* shortlisted[100];
    int shortCount = 0;

    for (int i = 0; i < n; i++) {
        string name;
        int exp;
        string skl[5];
        int skillCount;
        char certChar;
        bool cert;

        cout << "\nEnter candidate name: ";
        cin >> name;
        cout << "Enter experience (in years): ";
        cin >> exp;

        try {
            if (exp < 0) throw "Invalid experience!";

            cout << "Enter number of skills (max 5): ";
            cin >> skillCount;
            cout << "Enter skills: ";
            for (int j = 0; j < skillCount; j++) {
                cin >> skl[j];
            }

            cout << "Certified (Y/N): ";
            cin >> certChar;
            cert = (certChar == 'Y' || certChar == 'y');

            candidates[i] = new Candidate(name, exp, skl, skillCount, cert);

            // Filtering logic: experience >= 2 and has "C++" skill
            if (candidates[i]->filter(2, "C++")) {
                shortlisted[shortCount++] = candidates[i];
            }
        } catch (const char* errMsg) {
            cout << "Error: " << errMsg << endl;
            i--; // retry this candidate
        }
    }

    // Save to file
    saveToFile(shortlisted, shortCount);

    // Free memory
    for (int i = 0; i < n; i++) {
        delete candidates[i];
    }

    cout << "\nShortlisted candidates saved to 'shortlisted.txt'\n";
    return 0;
}
