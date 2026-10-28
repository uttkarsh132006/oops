#include<iostream>
using namespace std;

class vehicle{
    public:
        virtual void start()=0;
        virtual void stop()=0;
};

class car: public vehicle{
    public:
        void start() override{
            cout<<"started"<<endl;
        }
        void stop() override{
            cout<<"stopped"<<endl;
        }
};

class bike : public vehicle{
    public:
        void start() override{
            cout<<"bike start"<<endl;

        }
        void stop() override{
            cout<<"bike stop"<<endl;
        }
};

class bus:public vehicle{
    public:
        void start() override{
            cout<<"bus start"<<endl;
        }
        void stop() override{
            cout<<"bus stop"<<endl;
        }
};

int main(){
    car c;
    bike b;
    bus bu;

    c.start();
    c.stop();

    b.start();
    b.stop();

    bu.start();
    bu.stop();

    return 0;
}


// #include<iostream>
// using namespace std;

// class car{
//     private:
//         string brand;
//         int model;
//         int price;

//     public:
//         car(string s,int n,int p){
//             brand=s;
//             model=n;
//             price=p;
//         }

//         car(car& c){
//             brand=c.brand;
//             model=c.model;
//             price=c.price;
//         }

//         void display(){
//             cout<<brand<<endl;
//             cout<<model<<endl;
//             cout<<price<<endl;
//         }
// };

// int main(){
//     car c1("maruti",12,234567);

//     car c2(c1);

//     c2.display();

//     return 0;

// }


