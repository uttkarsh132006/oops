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
        if(i==0&&str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
        if(str[i]==' '){
            
            i++;
            if(str[i]>='a'&&str[i]<='z'){
                str[i]=str[i]-32;
            }
        }
        i++;
    }
    cout<<str;

    return 0;
}