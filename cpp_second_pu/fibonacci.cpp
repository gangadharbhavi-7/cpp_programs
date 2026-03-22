#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;

    }
    else if(n==1){
        return 1;
    }
    else if(n>1){
        return fibonacci(n-1)+fibonacci(n-2);
    }
    else
    cout<<"Invalid input! Please enter a non-negative integer."<<endl;
    return -1;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    int result = fibonacci(n);
    if(result != -1){
        cout << "Fibonacci of "<<n<<" is: "<<result;

    }
    return 0;
}