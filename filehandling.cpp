#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    //writting to a file
    // ofstream fout;

    // fout.open("data.txt");


    // fout<<"hello file"<<endl;
    // fout<<100<<endl;

    // fout.close();



    //reading a file

    // ifstream fin;//fin is just a name 
    // fin.open("data.txt");//you can directly do it above by iftream fin("data.txt");

    // string line;
    // getline(fin,line);//getline will read the first line of the code
    // int n;
    // fin >> n;

    // cout<<line<<" "<<n<<endl;

    // fin.close();


    ////practice

    // ofstream fout;
    // fout.open("me.txt");

    // fout<<"name:uttkarsh singh"<<endl;
    // fout<<"2025bcse112";

    // fout.close();

    // ifstream fin;
    // fin.open("me.txt");

    // string name,rollno;

    // getline(fin,name);
    // getline(fin,rollno);

    // cout<<name<<" "<<rollno;
    // fin.close();



    //prac 

    // fstream f;
    // f.open("me.txt",ios::app);

    // f<<"branch:cse"<<endl;

    // f.close();

    // f.open("me.txt",ios::in);
    // string line;
    // while (getline(f,line))
    // {
    //     /* code */
    //     cout<<line<<" ";
    // }

    // f.close();


    //printing the file size

    fstream f;
    f.open("me.txt",ios::in|ios::out|ios::ate);

    cout<<f.tellg();

    f.close();



    return 0;
}

