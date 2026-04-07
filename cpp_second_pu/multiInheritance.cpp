#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"This is a vehicle"<<endl;

    }
};
class Fourwheeler: public Vehicle{
    public:
    void fourwheeler(){
        cout<<"This is a fourwheeler"<<endl;
    }
};

class Car: public Fourwheeler{
    public: 
    void car(){
        cout<<"This is a car"<<endl;


    }
};

int main(){
    Car c;
    c.vehicle();
    c.fourwheeler();
    c.car();
    return 0;
}