#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,s,area;
    cout<<"Enter the sides of the triangle: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The perimeter of the triangle is "<<s*2<<endl;
    cout<<"The area of the triangle is "<<area<<endl;
}