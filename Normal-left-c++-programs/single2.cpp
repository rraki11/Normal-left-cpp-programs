#include<iostream>
using namespace std;
class details {
        char name[100], address[50];
    public:
        void getdetails() {
            cout<<"enter name: ";
            cin>>name;
            cout<<"enter address: ";
            cin>>address;
        }
        void showdetails() {
            cout<<"name: "<<name<<endl;
            cout<<"address: "<<address<<endl;
        }
};

class employee_details : public details {
    int id;
    public:
        void getdetails() {
            details::getdetails();
            cout<<"enter employee id: ";
            cin>>id;
        }
        void showdetails() {
            details::showdetails();
            cout<<"empoyee id: "<<id<<endl;
        }
};

int main() {
    employee_details rr;
    rr.getdetails();
    rr.showdetails();
return 0;
}