#include<iostream>
using namespace std;
int main(){
    int n, sing=0;
 
    cout<<"enter the elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int j=0;j<n;j++){
        sing=sing^arr[j];
    }
    cout<<sing;
    return 0;
}