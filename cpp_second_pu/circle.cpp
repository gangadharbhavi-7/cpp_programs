#include<iostream>
using namespace std;
int main(){
    double radius,area,circumference;
    double const pi = 3.14;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"The area of the circle is "<<area<<endl;
    cout<<"The circumference of the circle is "<<circumference<<endl;
}