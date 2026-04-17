#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main(){
    int n;
    cout<<"Enter the first number: ";
    cin>>n;
    int m;
    cout<<"Enter the second number: ";
    cin>>m;
    cout<<"Before swapping:\n n="<<n<<" m="<<m<<endl;
    swap(n, m);
    cout<<"After swapping:\n n="<<n<<" m="<<m;
    return 0;
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
