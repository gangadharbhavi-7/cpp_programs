#include<iostream>
using namespace std;
int main(){
    double amount,disc=0.00;
    cout<<"Enter the bill amount: ";
    cin>>amount;
    if(amount>1000){
        disc=amount*0.08;
        amount=amount+disc;
    }
    cout<<"The total bill amount is "<<amount<<" and the discounted amount is "<<disc;
}