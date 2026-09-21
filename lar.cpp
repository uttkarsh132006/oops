 #include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"enter a string :";
    getline(cin, str);

    string word = "";
    string largest = "";

    for (int i = 0; i <= str.length(); i++) {

        if (i == str.length() || str[i] == ' ') {

            if (word.length() > largest.length()) {
                largest = word;
            }

        word = "";
        }
        else {
            word += str[i];
        }
}

cout << largest;

    return 0;
}