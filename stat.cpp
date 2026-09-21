
//display object count
#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    static void showCount() {
        cout << "Total objects = " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3, s4;

    s1.showCount();

    return 0;
}
