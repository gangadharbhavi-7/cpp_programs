#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,1,5,3,7};
    int n = sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        int minu=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]<=arr[i]){
                minu=arr[j];
                swap(minu,arr[j]);
            }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];snakeputi
    }
    return 0;fh
snake
}