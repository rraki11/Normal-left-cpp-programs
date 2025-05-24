#include<iostream>
using namespace std;
class base {
    public:
    int x;
        void getx() {
            cout<<"enter the value of x: ";
            cin>>x;
        }
};

class derived1 : public base {
    public:
    int y;
        void gety() {
            cout<<"enter the value of y: ";
            cin>>y;
        }
};

class derived2 : public derived1 {
    public:
    int z;
    int product = 0;
        void getz() {
            cout<<"enter the value of z: ";
            cin>>z;
        }
        void showpro() {
            product = x*y*z;
            cout<<endl<<product<<endl;
        }
};

int main() {
    derived2 rr;
    rr.getx();
    rr.gety();
    rr.getz();
    rr.showpro();
return 0;
}