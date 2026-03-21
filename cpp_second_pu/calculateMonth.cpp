#include<iostream>
using namespace std;
int main(){
    int days,months,years,total,rem;
    cout<<"Enter the number of days: ";
    cin>>total;
    years=total/365;
    rem=total%365;
    months=rem/30;
  
    days=rem%30;
    cout<<"The total days entered are: ";
    cout<<"Years: "<<years<<endl;
    cout<<"Months: "<<months<<endl;
    cout<<"Days: "<<days<<endl;
}