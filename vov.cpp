#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(){

     string str;
     string lar;
    cout<<"enter your string:";
    getline(cin,str);

    int n=str.length();
    int i=0;
     int cnt=0;
     while(i<n){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            cnt++;
        }
        i++;
     }

     cout<<cnt;

    return 0;
}