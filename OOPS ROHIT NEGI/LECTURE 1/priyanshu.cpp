#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string name;
    int pin;
    float balance;

public:
    BankAccount(int accNo, string name, int pin, float bal)
        : accountNumber(accNo), name(name), pin(pin), balance(bal) {}

    virtual ~BankAccount() {}

    int getAccountNumber() const { return accountNumber; }

    bool verifyPin(int enteredPin) const {
        return pin == enteredPin;
    }

    virtual void applyInterest() = 0;

    BankAccount& operator+=(float amount) {
        balance += amount;
        saveTransaction("Deposit", amount);
        return *this;
    }

    BankAccount& operator-=(float amount) {
        if (amount > balance)
            throw runtime_error("Insufficient balance.");
        balance -= amount;
        saveTransaction("Withdraw", amount);
        return *this;
    }

    float getBalance() const { return balance; }

    void displayAccount() const {
        cout << "Account No: " << accountNumber << ", Name: " << name
             << ", Balance: $" << balance << endl;
    }

    friend void transferMoney(BankAccount &from, BankAccount &to, float amount);

    void saveTransaction(const string &type, float amount) const {
        ofstream file("transactions.txt", ios::app);
        file << "Account: " << accountNumber << ", " << type
             << ": $" << amount << ", Balance: $" << balance << endl;
        file.close();
    }
};

class SavingAccount : public BankAccount {
public:
    SavingAccount(int accNo, string name, int pin, float bal)
        : BankAccount(accNo, name, pin, bal) {}

    void applyInterest() override {
        float interest = balance * 0.03f;
        balance += interest;
        saveTransaction("Interest", interest);
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(int accNo, string name, int pin, float bal)
        : BankAccount(accNo, name, pin, bal) {}

    void applyInterest() override {
        float interest = balance * 0.01f;
        balance += interest;
        saveTransaction("Interest", interest);
    }
};

void transferMoney(BankAccount &from, BankAccount &to, float amount) {
    if (amount > from.balance)
        throw runtime_error("Transfer failed: Insufficient balance.");
    from.balance -= amount;
    to.balance += amount;
    from.saveTransaction("Transfer Out", amount);
    to.saveTransaction("Transfer In", amount);
}

bool verifyOTP() {
    srand(time(0));
    int otp = rand() % 9000 + 1000;
    cout << "Generated OTP (simulated): " << otp << endl;
    int enteredOTP;
    cout << "Enter OTP: ";
    cin >> enteredOTP;
    return enteredOTP == otp;
}

int main() {
    try {
        SavingAccount user1(1001, "Alice", 1234, 5000);
        CurrentAccount user2(1002, "Bob", 5678, 3000);

        int accNo, pin;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter PIN: ";
        cin >> pin;

        BankAccount* user = nullptr;
        if (accNo == user1.getAccountNumber() && user1.verifyPin(pin))
            user = &user1;
        else if (accNo == user2.getAccountNumber() && user2.verifyPin(pin))
            user = &user2;

        if (!user)
            throw runtime_error("Login failed: Invalid Account Number or PIN.");

        if (!verifyOTP())
            throw runtime_error("OTP Verification Failed.");

        cout << "\nLogin successful!\n";
        user->displayAccount();

        int choice;
        do {
            cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Transfer\n4. Apply Interest\n5. Show Balance\n0. Exit\nChoice: ";
            cin >> choice;

            float amount;
            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    if (amount <= 0) throw invalid_argument("Invalid amount.");
                    *user += amount;
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    if (amount <= 0) throw invalid_argument("Invalid amount.");
                    *user -= amount;
                    break;
                case 3:
                    cout << "Enter amount to transfer to another account: ";
                    cin >> amount;
                    if (amount <= 0) throw invalid_argument("Invalid amount.");
                    transferMoney(*user, user == &user1 ? (BankAccount&)user2 : (BankAccount&)user1, amount);
                    break;
                case 4:
                    user->applyInterest();
                    cout << "Interest applied.\n";
                    break;
                case 5:
                    user->displayAccount();
                    break;
                case 0:
                    cout << "Exiting...\n";
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        } while (choice != 0);
    }
    catch (exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

 return 0;
}
