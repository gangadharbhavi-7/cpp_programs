#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if((year%100==0 and year%400==0) or (year%100!=0 and year%4==0))
    cout<<"The year is a leap year";
    else
    cout<<"The year is not a leap year";
}