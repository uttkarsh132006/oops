// #include<iostream>
// #include<string>
// using namespace std;

// class employee{
//     int employeeId;
//     string name;
//     int salary;
//     string department;

//     public:
//         employee(int n){
//             employeeId=n;
//         }

//         employee(int n,string h){
//             employeeId=n;
//             name=h;

//         }

//         employee(int n,string h,int s){
//             employeeId=n;
//             name=h;
//             salary=s;
//         }
//         employee(int n,string h,int s,string dept){
//             employeeId=n;
//             name=h;
//             salary=s;
//             department=dept;

//         }
//         void display() {

//             float hra = salary * 0.20;
//             float da = salary * 0.10;
//             float grossSalary = salary + hra + da;
//             cout << "\nEmployee ID: " << employeeId;
            
             
//             cout << "\nBasic Salary: " << salary;
             
//             cout << "\nHRA (20%): " << hra;
            
//             cout << "\nDA (10%): " << da;
//             cout << "\nGross Salary: " << grossSalary;
//             cout<<"\n";
//         }
// };


// int main(){
//     employee e1(101);
//     employee e2(102,"uttkarsh");
//     employee e3(103,"anik",50000);
//     employee e4(104,"sohaib",60000,"cse");

//     e1.display();
//     e2.display();
//     e3.display();
//     e4.display();

//     return 0;

// }

// #include <iostream>
// using namespace std;

// class Sample {
// private:
//     int value;

// public:
//     Sample() {
//         value = 0;
//         cout << "Default Constructor called. Value = " << value << endl;
//     }

//     Sample(int v) {
//         value = v;
//         cout << "Parameterized Constructor called. Value = " << value << endl;
//     }

//     // Sample(const Sample &obj) {
//     //     value = obj.value;
//     //     cout << "Copy Constructor called. Value = " << value << endl;
//     // }

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Sample s1;          
//     Sample s2(100);     
//     Sample s3 = s2;  
     
//     s3.display();

//     cout<<&s3<<" "<<&s2;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length, width;

// public:
//     // Default constructor (Overload 1)
//     Rectangle() {
//         length = 0;
//         width = 0;
//     }

//     // Single-parameter constructor for a square (Overload 2)
//     Rectangle(int side) {
//         length = side;
//         width = side;
//     }

//     // Two-parameter constructor for a rectangle (Overload 3)
//     Rectangle(int l, int w) {
//         length = l;
//         width = w;
//     }

//     // Copy Constructor
//     Rectangle(const Rectangle &r) {
//         length = r.length;
//         width = r.width;
//     }

//     void displayArea() {
//         cout << "Area: " << (length * width) << " (Length: " << length << ", Width: " << width << ")" << endl;
//     }
// };

// int main() {
//     Rectangle r1;          // Default
//     Rectangle r2(5);       // Overload 1 (Square)
//     Rectangle r3(4, 6);    // Overload 2 (Rectangle)
//     Rectangle r4 = r3;     // Copy

//     r1.displayArea();
//     r2.displayArea();
//     r3.displayArea();
//     r4.displayArea();

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// private:
//     int accountNumber;
//     string name;
//     double balance;

// public:
//     BankAccount() {
//         accountNumber = 0;
//         name = "Unknown";
//         balance = 0.0;
//     }

//     BankAccount(int accNum, string n) {
//         accountNumber = accNum;
//         name = n;
//         balance = 0.0;
//     }

//     BankAccount(int accNum, string n, double bal) {
//         accountNumber = accNum;
//         name = n;
//         balance = bal;
//     }

//     void display() const {
//         cout << "Account No: " << accountNumber 
//              << " | Name: " << name 
//              << " | Balance: $" << balance << endl;
//     }
// };

// int main() {
//     BankAccount acc1;
//     BankAccount acc2(101, "Alice");
//     BankAccount acc3(102, "Bob", 1500.75);

//     acc1.display();
//     acc2.display();
//     acc3.display();

//     return 0;
// }




// #include <iostream>
// #include <iomanip>
// using namespace std;

// class Time {
// private:
//     int hours, minutes, seconds;

// public:
//     Time() : hours(0), minutes(0), seconds(0) {}

//     // Parameterized constructor
//     Time(int h, int m, int s) {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }

//     void display() const {
//         cout << setfill('0') << setw(2) << hours << ":"
//              << setw(2) << minutes << ":"
//              << setw(2) << seconds << endl;
//     }
// };

// int main() {
//     Time t1;
//     Time t2(10, 45, 30);

//     cout << "Time 1: ";
//     t1.display();
//     cout << "Time 2: ";
//     t2.display();

//     return 0;
// }




//time class

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hours, minutes, seconds;

// public:
//     // Default Constructor
//     Time()
//     {
//         hours = 0;
//         minutes = 0;
//         seconds = 0;
//     }

//     // Parameterized Constructor
//     Time(int h, int m, int s)
//     {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }

//     void display()
//     {
//         cout << hours << " Hours, "
//              << minutes << " Minutes, "
//              << seconds << " Seconds" << endl;
//     }
// };

// int main()
// {
//     Time t1;
//     Time t2(10, 30, 45);

//     cout << "Default Time:" << endl;
//     t1.display();

//     cout << "\nParameterized Time:" << endl;
//     t2.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Complex
// {
//     float real, imaginary;

// public:
//     // Parameterized Constructor
//     Complex(float r, float i)
//     {
//         real = r;
//         imaginary = i;
//     }

//     // Copy Constructor
//     Complex(const Complex &c)
//     {
//         real = c.real;
//         imaginary = c.imaginary;
//     }

//     void display()
//     {
//         cout << real << " + " << imaginary << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(5.5, 3.2);

//     // Copying c1 into c2
//     Complex c2(c1);

//     cout << "Original Complex Number:" << endl;
//     c1.display();

//     cout << "\nCopied Complex Number:" << endl;
//     c2.display();

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Distance
// {
//     int feet, inches;

// public:
//     // Default Constructor
//     Distance()
//     {
//         feet = 0;
//         inches = 0;
//     }

//     // Constructor with feet
//     Distance(int f)
//     {
//         feet = f;
//         inches = 0;
//     }

//     // Constructor with feet and inches
//     Distance(int f, int i)
//     {
//         feet = f;
//         inches = i;
//     }

//     void display()
//     {
//         cout << feet << " feet " << inches << " inches" << endl;
//     }
// };

// int main()
// {
//     Distance d1;
//     Distance d2(5);
//     Distance d3(5, 8);

//     cout << "Distance 1:" << endl;
//     d1.display();

//     cout << "\nDistance 2:" << endl;
//     d2.display();

//     cout << "\nDistance 3:" << endl;
//     d3.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Book
// {
//     int bookID;
//     string title;
//     float price;

// public:
//     // Default Constructor
//     Book()
//     {
//         bookID = 0;
//         title = "Unknown";
//         price = 0;
//     }

//     // Constructor with Book ID
//     Book(int id)
//     {
//         bookID = id;
//         title = "Unknown";
//         price = 0;
//     }

//     // Constructor with ID and Title
//     Book(int id, string t)
//     {
//         bookID = id;
//         title = t;
//         price = 0;
//     }

//     // Constructor with all details
//     Book(int id, string t, float p)
//     {
//         bookID = id;
//         title = t;
//         price = p;
//     }

//     void display()
//     {
//         cout << "Book ID: " << bookID << endl;
//         cout << "Title: " << title << endl;
//         cout << "Price: " << price << endl;
//     }
// };

// int main()
// {
//     Book b1;
//     Book b2(101);
//     Book b3(102, "C++ Programming");
//     Book b4(103, "Data Structures", 550);

//     cout << "Book 1:" << endl;
//     b1.display();

//     cout << "\nBook 2:" << endl;
//     b2.display();

//     cout << "\nBook 3:" << endl;
//     b3.display();

//     cout << "\nBook 4:" << endl;
//     b4.display();

//     return 0;
// }



#include <iostream>
using namespace std;

class Demo
{
    int number;

public:
     
    Demo(int n)
    {
        number = n;
        cout << "Constructor called for Object " << number << endl;
    }

     
    ~Demo()
    {
        cout << "Destructor called for Object " << number << endl;
    }
};

int main()
{
    cout << "Creating objects..." << endl;

    Demo obj1(1);
    Demo obj2(2);
    Demo obj3(3);

    cout << "\nAll objects created." << endl;

    return 0;
}


