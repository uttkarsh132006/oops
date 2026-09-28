// #include <iostream>
// #include <string>
// using namespace std;
 
// class Person {
// protected:
//     string name;
//     int age;

// public:
//     void getPersonData() {
//         cout << "Enter name: ";
//         getline(cin, name);

//         cout << "Enter age: ";
//         cin >> age;
//     }
// };

 
// class Student : public Person {
// private:
//     int rollNo;
//     string department;
//     int semester;

// public:
//     void getStudentData() {
//         getPersonData();

//         cout << "Enter roll number: ";
//         cin >> rollNo;

//         cin.ignore(); // clear newline

//         cout << "Enter department: ";
//         getline(cin, department);

//         cout << "Enter semester: ";
//         cin >> semester;
//     }

//     void display() {
//         cout << "\n--- Student Information ---\n";
//         cout << "Name       : " << name << endl;
//         cout << "Age        : " << age << endl;
//         cout << "Roll Number: " << rollNo << endl;
//         cout << "Department : " << department << endl;
//         cout << "Semester   : " << semester << endl;
//     }
// };

// int main() {
//     Student s;

//     s.getStudentData();
//     s.display();

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

 
// class Employee {
// protected:
//     string name;
//     int employeeID;
//     double salary;

// public:
//     void getEmployeeData() {
//         cout << "Enter employee name: ";
//         getline(cin, name);

//         cout << "Enter employee ID: ";
//         cin >> employeeID;

//         cout << "Enter monthly salary: ";
//         cin >> salary;
//     }
// };


// class Manager : public Employee {
// private:
//     string department;
//     int teamSize;

// public:
//     void getManagerData() {
//         getEmployeeData();

//         cin.ignore();

//         cout << "Enter department: ";
//         getline(cin, department);

//         cout << "Enter team size: ";
//         cin >> teamSize;
//     }

//     void display() {
//         double annualSalary = salary * 12;

//         cout << "\n--- Manager Details ---\n";
//         cout << "Name          : " << name << endl;
//         cout << "Employee ID   : " << employeeID << endl;
//         cout << "Monthly Salary: " << salary << endl;
//         cout << "Annual Salary : " << annualSalary << endl;
//         cout << "Department    : " << department << endl;
//         cout << "Team Size     : " << teamSize << endl;
//     }
// };

// int main() {
//     Manager m;

//     m.getManagerData();
//     m.display();

//     return 0;
// }


#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    // Constructor of BankAccount
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;

        cout << "BankAccount constructor called" << endl;
    }

    void displayAccount() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

// Derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor of SavingsAccount
    SavingsAccount(int accNo, double bal, double rate)
        : BankAccount(accNo, bal) {
        
        interestRate = rate;

        cout << "SavingsAccount constructor called" << endl;
    }

    double calculateInterest() {
        return balance * interestRate / 100;
    }

    void display() {
        displayAccount();
        cout << "Interest Rate  : " << interestRate << "%" << endl;
        cout << "Interest       : " << calculateInterest() << endl;
    }
};

int main() {

    SavingsAccount account(101, 50000, 6.5);

    cout << "\n--- Account Details ---" << endl;
    account.display();

    return 0;
}