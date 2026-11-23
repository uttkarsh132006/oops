#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person() { cout << "Person "; }
};

class Student :virtual public Person {      // Blank 1
public:
    Student() { cout << "Student "; }
};

class Employee : virtual public Person {     // Blank 2
public:
    Employee() { cout << "Employee "; }
};

class Intern : public Student, public Employee {
public:
    Intern() { cout << "Intern "; }
};

int main() {
    Intern obj;
    obj.name = "uttkarsh";                      // Blank 3
    cout << obj.name;
    return 0;
}