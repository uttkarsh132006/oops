//passing object to function
//adding two complex number
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    c3.add(c1, c2);

    cout << "Sum = ";
    c3.display();

    return 0;
}
