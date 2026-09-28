#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;
    string department;
    int semester;

public:
    void getStudentData() {
        getPersonData();

        cout << "Enter roll number: ";
        cin >> rollNo;

        cin.ignore(); // clear newline

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter semester: ";
        cin >> semester;
    }

    void display() {
        cout << "\n--- Student Information ---\n";
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Department : " << department << endl;
        cout << "Semester   : " << semester << endl;
    }
};

int main() {
    Student s;

    s.getStudentData();
    s.display();

    return 0;
}

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


// #include <iostream>
// using namespace std;


// class BankAccount {
// protected:
//     int accountNumber;
//     double balance;

// public:
    
//     BankAccount(int accNo, double bal) {
//         accountNumber = accNo;
//         balance = bal;

//         cout << "BankAccount constructor called" << endl;
//     }

//     void displayAccount() {
//         cout << "Account Number : " << accountNumber << endl;
//         cout << "Balance        : " << balance << endl;
//     }
// };


// class SavingsAccount : public BankAccount {
// private:
//     double interestRate;

// public:
//     // Constructor of SavingsAccount
//     SavingsAccount(int accNo, double bal, double rate)
//         : BankAccount(accNo, bal) {
        
//         interestRate = rate;

//         cout << "SavingsAccount constructor called" << endl;
//     }

//     double calculateInterest() {
//         return balance * interestRate / 100;
//     }

//     void display() {
//         displayAccount();
//         cout << "Interest Rate  : " << interestRate << "%" << endl;
//         cout << "Interest       : " << calculateInterest() << endl;
//     }
// };

// int main() {

//     SavingsAccount account(101, 50000, 6.5);

//     cout << "\n--- Account Details ---" << endl;
//     account.display();

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// // Base class
// class Person {
// protected:
//     string name;

// public:
//     // Constructor
//     Person(string n) {
//         name = n;
//         cout << "Person constructor called" << endl;
//     }
// };

// // Derived class
// class Employee : public Person {
// protected:
//     int employeeID;
//     double basicSalary;

// public:
//     // Constructor
//     Employee(string n, int id, double salary)
//         : Person(n) {
        
//         employeeID = id;
//         basicSalary = salary;

//         cout << "Employee constructor called" << endl;
//     }
// };

// // Derived class
// class Manager : public Employee {
// private:
//     int teamSize;
//     string department;

// public:
//     // Constructor
//     Manager(string n, int id, double salary, int team, string dept)
//         : Employee(n, id, salary) {
        
//         teamSize = team;
//         department = dept;

//         cout << "Manager constructor called" << endl;
//     }

//     void display() {
//         cout << "\n--- Manager Record ---" << endl;
//         cout << "Name         : " << name << endl;
//         cout << "Employee ID  : " << employeeID << endl;
//         cout << "Basic Salary : " << basicSalary << endl;
//         cout << "Team Size    : " << teamSize << endl;
//         cout << "Department   : " << department << endl;
//     }
// };

// int main() {

//     Manager m("Uttkarsh", 101, 50000, 10, "Computer Science");

//     m.display();

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// // Base class
// class Vehicle {
// protected:
//     string brand;
//     string registrationNumber;

// public:
//     Vehicle(string b, string reg) {
//         brand = b;
//         registrationNumber = reg;
//     }
// };

// // Derived class
// class Car : public Vehicle {
// protected:
//     int seatingCapacity;
//     string model;

// public:
//     Car(string b, string reg, int seats, string m)
//         : Vehicle(b, reg) {
        
//         seatingCapacity = seats;
//         model = m;
//     }
// };

// // Derived class
// class ElectricCar : public Car {
// private:
//     double batteryCapacity;
//     double chargingRange;

// public:
//     ElectricCar(string b, string reg, int seats, string m,
//                 double battery, double range)
//         : Car(b, reg, seats, m) {
        
//         batteryCapacity = battery;
//         chargingRange = range;
//     }

//     void display() {
//         cout << "\n--- Electric Car Details ---" << endl;
//         cout << "Brand               : " << brand << endl;
//         cout << "Registration Number : " << registrationNumber << endl;
//         cout << "Model               : " << model << endl;
//         cout << "Seating Capacity    : " << seatingCapacity << endl;
//         cout << "Battery Capacity    : " << batteryCapacity << " kWh" << endl;
//         cout << "Charging Range      : " << chargingRange << " km" << endl;
//     }
// };

// int main() {

//     ElectricCar e(
//         "Tesla",
//         "JK01AB1234",
//         5,
//         "Model 3",
//         75,
//         500
//     );

//     e.display();

//     return 0;
// }