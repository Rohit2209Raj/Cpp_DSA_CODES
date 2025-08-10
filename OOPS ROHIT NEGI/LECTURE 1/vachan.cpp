#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

// Base class
class Patient {
protected:
    string name;
    int heartRate;
    int bloodPressure;
    float temperature;

public:
    void inputDetails() {
        cout << "Enter Patient Name: ";
        getline(cin, name);
        if (name.empty()) throw invalid_argument("Patient name cannot be empty.");

        cout << "Enter Heart Rate (40-200 BPM): ";
        cin >> heartRate;
        if (heartRate < 40 || heartRate > 200) throw out_of_range("Heart Rate out of range!");

        cout << "Enter Blood Pressure (80-200 mmHg): ";
        cin >> bloodPressure;
        if (bloodPressure < 80 || bloodPressure > 200) throw out_of_range("Blood Pressure out of range!");

        cout << "Enter Temperature (90.0-110.0 °F): ";
        cin >> temperature;
        if (temperature < 90.0 || temperature > 110.0) throw out_of_range("Temperature out of range!");
    }

    virtual void alertLevel() {
        cout << "General Health Monitoring...\n";
    }

    void saveToFile() {
        ofstream file("patient_records.txt", ios::app);
        if (!file) {
            cerr << "Error opening file.\n";
            return;
        }
        file << "Patient: " << name << "\n"
             << "Heart Rate: " << heartRate << " BPM\n"
             << "Blood Pressure: " << bloodPressure << " mmHg\n"
             << "Temperature: " << temperature << " F\n"
             << "--------------------------\n";
        file.close();
    }
};

// Derived class with overridden alert system
class HealthMonitor : public Patient {
public:
    void alertLevel() override {
        cout << "\n--- Alert Level ---\n";
        if (heartRate < 60 || heartRate > 100)
            cout << "Abnormal Heart Rate!\n";
        if (bloodPressure < 90 || bloodPressure > 140)
            cout << "Abnormal Blood Pressure!\n";
        if (temperature < 97.0 || temperature > 99.5)
            cout << "Abnormal Temperature!\n";
        cout << "--------------------\n";
    }
};

// Main function
int main() {
    HealthMonitor patient;
    try {
        patient.inputDetails();
        patient.alertLevel();
        patient.saveToFile();
        cout << "Patient record saved successfully.\n";
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }
 return 0;
}
