//rerutning object from func

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

    Complex add(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    c3 = c1.add(c2);

    cout << "Sum = ";
    c3.display();

    return 0;
}
