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