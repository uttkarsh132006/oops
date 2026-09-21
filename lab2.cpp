#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

// class student{
// private:
//     int rollno;
//     string name;
// public:
//     void setdata(int r,string n){
//         rollno=r;
//         name=n;
//     }
//     void display(){
//         cout<<"rollno:"<<rollno<<endl;
//         cout<<"name:"<<name<<endl;
//     }
// };



// int main(){
//     student s;
//     s.setdata(94,"soaib");
//     s.display();
//     return 0;
    

//     return 0;
// }

// class student{
//     private:
//         int rollno;
//         string name;
//     public:
//         void setdata(int r,string n);
//         void display();

// };

// void student::setdata(int r,string n){
//     rollno=r;
//     name=n;
// }
// void student::display(){
//     cout<<rollno<<" "<<name<<endl;
// }

// class student{
//     private:
//         int marks;
//     public:
//         void getmarks(){
//             cout<<"enter marks:";
//             cin>>marks;
//         }
//         void result(){
//             if(marks>40)cout<<"pass";
//             else cout<<"fail";
//         }
//         void process(){
//             getmarks();
//             result();
//         }
// };

// class student{

//     private:
//         int mark[5];
       
//     public:
//         void input(){
//             cout<<"enter marks"<<endl;
//             for(int i=0;i<5;i++){
//                 cin>>mark[i];
//             }
//         }
//         void display(){
//             cout<<"number are:";
//             for(int i=0;i<5;i++){
//                 cout<<"number of student"<<i+1;
//                 cout<<":"<<mark[i]<<endl;
//             }
//         }
// };

class demo{
    public:
        void display(){
            cout<<"this displays function"<<endl;

        }
        void show(){
            cout<<"this shows function"<<endl;
            display();
        }
};

int main(){
     demo obj;
     obj.show();
     
     return 0;

    
}