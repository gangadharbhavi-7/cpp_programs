#include<iostream>
using namespace std;
int sumofDigits(int n){
    int sum=0, x;
    while(n>0){
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    cout << "Sum of digits: "<<sumofDigits(n);
    return 0;
}