//counting number of objects
#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    void displayCount() {
        cout << "Number of objects = " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    s3.displayCount();

    return 0;
}
