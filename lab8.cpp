//q->6

#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() { //enables runtime overridding of virtual function
        cout << "Employee performs general work." << endl;
    }
};

class Developer : public Employee {
public:
    void work() override { //this override tell that it must overwrite a virtual parent fucntion
        cout << "Developer writes and maintains software." << endl;
    }
};

class AIEngineer : public Developer {
public:
    void work() override {
        cout << "AI Engineer develops AI and machine learning systems." << endl;
    }
};

int main() {
    Employee *e; //now this pointer is creaated to acces child class function using virtual and overrride

    Developer d;
    AIEngineer ai;

    e = &d;
    e->work();

    e = &ai;
    e->work();

    return 0;
}


//q->7

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
private:
    int rollNo;
    string department;

public:
    void setStudent(int r, string d) {
        rollNo = r;
        department = d;
    }

    void displayStudent() {
        displayPerson();   // Reusing Person information
        cout << "Roll Number: " << rollNo << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class 2
class Faculty : public Person {
private:
    int employeeID;
    string subject;

public:
    void setFaculty(int id, string s) {
        employeeID = id;
        subject = s;
    }

    void displayFaculty() {
        displayPerson();   // Reusing Person information
        cout << "Employee ID: " << employeeID << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {

    Student s;
    s.setPerson("Utkarsh", 20);
    s.setStudent(112, "CSE");

    cout << "----- Student Details -----" << endl;
    s.displayStudent();

    cout << endl;

    Faculty f;
    f.setPerson("Dr. Sharma", 45);
    f.setFaculty(101, "Database Management");

    cout << "----- Faculty Details -----" << endl;
    f.displayFaculty();

    return 0;
}