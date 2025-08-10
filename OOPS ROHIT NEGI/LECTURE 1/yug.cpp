#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;

// Base class
class Vehicle {
protected:
    string vehicleNumber;
    int entryTime;
    int exitTime;

public:
    Vehicle(string vNum, int inTime, int outTime)
        : vehicleNumber(vNum), entryTime(inTime), exitTime(outTime) {}

    virtual float calculateCharge() = 0;

    int getDuration() {
        return exitTime - entryTime;
    }

    virtual string getType() = 0;

    friend ostream& operator<<(ostream& out, Vehicle& v) {
        out << "Vehicle Number: " << v.vehicleNumber
            << ", Type: " << v.getType()
            << ", Duration: " << v.getDuration() << " hrs"
            << ", Charge: Rs. " << v.calculateCharge();
        return out;
    }

    void logToFile() {
        ofstream file("parking_log.txt", ios::app);
        file << vehicleNumber << "," << getType() << "," << entryTime << "," << exitTime << "," << calculateCharge() << endl;
        file.close();
    }
};

// Derived classes
class Car : public Vehicle {
public:
    Car(string vNum, int inTime, int outTime)
        : Vehicle(vNum, inTime, outTime) {}

    float calculateCharge() override {
        return getDuration() * 20.0; // Rs. 20 per hour
    }

    string getType() override {
        return "Car";
    }
};

class Bike : public Vehicle {
public:
    Bike(string vNum, int inTime, int outTime)
        : Vehicle(vNum, inTime, outTime) {}

    float calculateCharge() override {
        return getDuration() * 10.0; // Rs. 10 per hour
    }

    string getType() override {
        return "Bike";
    }
};

// Validate time input (0 to 23)
bool isValidTime(int time) {
    return time >= 0 && time <= 23;
}

// Main function
int main() {
    string vehicleNumber, type;
    int entryTime, exitTime;

    cout << "Enter Vehicle Number: ";
    cin >> vehicleNumber;

    cout << "Enter Vehicle Type (Car/Bike): ";
    cin >> type;

    cout << "Enter Entry Time (0-23): ";
    cin >> entryTime;
    if (!isValidTime(entryTime)) {
        cout << "Invalid entry time!" << endl;
        return 1;
    }

    cout << "Enter Exit Time (0-23): ";
    cin >> exitTime;
    if (!isValidTime(exitTime) || exitTime < entryTime) {
        cout << "Invalid exit time!" << endl;
        return 1;
    }

    Vehicle* v;
    if (type == "Car")
        v = new Car(vehicleNumber, entryTime, exitTime);
    else if (type == "Bike")
        v = new Bike(vehicleNumber, entryTime, exitTime);
    else {
        cout << "Unknown vehicle type!" << endl;
        return 1;
    }

    cout << "\n--- Parking Summary ---\n";
    cout << *v << endl;

    v->logToFile();

    delete v;
    return 0;
}
