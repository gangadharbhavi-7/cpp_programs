#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double principal,rate,time,interest,compoundInterest,amount;
    cout << "Enter the principal amount: ";
    cin>>principal;
    cout << "Enter the rate of interest: ";
    cin>> rate;
    cout << "Enter the time in years: ";
    cin>>time;
    interest=(principal*rate*time)/100;
    compoundInterest=principal*pow((1+rate/100),time)-principal;
    cout<<"Simple Interest: "<<interest<<endl;
    cout<<"compound Interest: "<<compoundInterest<<endl;
    cout<<"Total Amount: " <<principal +interest<<endl;
    return 0;
}