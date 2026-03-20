#include<iostream>
using namespace std;
int main(){
    double units, amount, surcharge;
    char name[50];
    cout << "Enter the name of the customer: ";
    cin.getline(name, 50);
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if(units <= 200){
        amount = units * 0.80;
    }
    else if(units > 200 && units <=300){
        amount = 200 * 0.80 + (units - 200) * 0.90;

    }
    else{
        amount = units * 1.00;
    }
    if(amount > 400){
        surcharge = amount*0.15;
        amount =amount + surcharge;
    }
    cout << "*********Electricity Bill********";
    cout << "\ncustomer name: " << name;
    cout << "\nUnits consumed: " << units;
    cout << "\nAmount: " << amount;
    return 0;

}