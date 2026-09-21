#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"enter your string:";
    getline(cin,str);

    int n=str.length();
    int low=0,high=n-1;
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
    cout<<str<<endl;

    return 0;
}