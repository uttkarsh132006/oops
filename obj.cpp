
//storing 3 detail of student
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Student {
    int roll;
    string name;

public:

    void input() {
        cout << "Enter Roll: ";
        cin >> roll;

        while (true) {
            cout << "Enter Name: ";
            cin >> name;

            bool valid = true;

            for (char c : name) {
                if (!isalpha(c)) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                break;
            }

            cout << "Invalid name! Please enter letters only.\n";
        }
    }

    void display() {
        cout << roll << "\t" << name << endl;
    }
};

int main() {

    Student s[3];

    for (int i = 0; i < 3; i++) {
        s[i].input();
    }

    cout << "\nStudent Details\n";
    cout << "Roll\tName\n";

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    return 0;
}