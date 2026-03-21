#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<< "Before swapping:\n a = "<<a<<" b = " <<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<< "After Swapping:\n a = "<<a<<" b = "  <<b<<endl;
    return 0;
}