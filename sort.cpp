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
     
    map<int,char>mpp;
     
    while(i<n){
        mpp[(int)str[i]]=str[i];
        i++;
    }

    for(auto it:mpp){
        cout<<it.second;
    }
     

    return 0;
}