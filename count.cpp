
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words = " << count << endl;
    return 0;
}