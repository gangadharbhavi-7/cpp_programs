#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
}
int main(){
    int n,key;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element to search: ";
    cin>>key;
    int ind = search(arr, n,key);
    cout<<"Element is found at the index "<<ind<<endl;
   
return 0;
}