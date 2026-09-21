#include <iostream>
using namespace std;
class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }
    friend void display(Student S);
};
void display(Student S1)
{
    cout << "Marks: " << S1.marks << endl;
}
int main()
{
    Student s(94);
    display(s);
    return 0;
}

// #include <iostream>
// using namespace std;
// class Student
// {
//     int marks = 91;

// public:
//     friend class Teacher;
// };
// class Teacher
// {
// public:
//     void display(Student s)
//     {
//         cout << "Marks: " << s.marks << endl;
//     }
// };
// int main()
// {
//     Student S;
//     Teacher T;
//     T.display(S);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class Number
// {
//     int x;

// public:
//     Number(int n)
//     {
//         x = n;
//     }
//     void operator++()
//     {
//         ++x;
//     }
//     void display()
//     {
//         cout << "\nNumber :  " << x << endl
//              << endl;
//     }
// };
// int main()
// {
//     Number n(10);
//     ++n;
//     n.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;


// class Number {
//     int a;

// public:
//     Number(int x) {
//         a = x;
//     }

//     Number operator+(Number t2) {
//         return Number(a + t2.a);
//     }

//     void display(){
//         cout<<a<<" ";
//     }
// };

// int main() {
//     Number n1(10);
//     Number n2(20);

//     Number n3 = n1 + n2;

//     n3.display();
// }