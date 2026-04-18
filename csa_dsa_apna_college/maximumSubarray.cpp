#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int  maxsize=0;
    for(int i=0;i<size;i++){
        int currentsize=0;
        for(int j=i;j<size;j++){
            currentsize+=arr[j];
            maxsize=max(currentsize,maxsize);

        }
    }
    cout<<maxsize;
    return 0;
}