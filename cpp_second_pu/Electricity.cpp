#include<iostream>
using namespace std;
int main(){
    double units,bill;
    cout<<"Enter the units consumed: ";
    cin>>units;
    if(units<30){
        bill=units*3.50;
    }
    else if(units>=30 and units<50){
        bill=29*3.50+(units-29)*4.25;

    }
    else if(units>=50 and units<100){
        bill=29*3.50+ 20*4.25 + (units-49)*5.25;

    }
    else
     bill=29*3.50+ 20*4.25 + 50*5.25 + (units-99)*5.85;
    cout<<"********Electricity Bill**********\n";
    cout<<"units consumed: "<<units;
    cout<<endl<<"Bill amount: "<<bill;
    return 0;
}