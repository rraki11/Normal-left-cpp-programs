#include<iostream>
using namespace std;
class dimensions {
    public:
        int height;
        int width;
        void seth() {
            cout<<"enter height: ";
            cin>>height;
        }
        void setw() {
            cout<<"enter width: ";
            cin>>width;
        }
};

class area : public dimensions {
    int rectangle;
    public:
        void area_cal() {
            rectangle = height * width;
            cout<<"the area of rectangle is: "<<rectangle<<endl;
        }
};

int main() {
    area rr;
    rr.seth();
    rr.setw();
    rr.area_cal();
return 0;
}