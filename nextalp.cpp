#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"enter your string:";
    getline(cin,str);

    int n=str.length();
    int i=0;

    while(i<n){

        if(str[i]=='z'){
            str[i]='a';
            i++;
        }
        else if(str[i]=='Z'){
            str[i]='A';
        }
        else {
            if(('A'<=str[i]&&str[i]<='Z')||('a'<=str[i]&&str[i]<='z')){
                str[i]=str[i]+1;
                i++;
            }
            else {
                i++;
            }
        }
    }
    cout<<str<<endl;

    return 0;
}