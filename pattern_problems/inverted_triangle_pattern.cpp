#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout << "Enter the number of lines: ";
    cin >> n;
    num=1;
    for(int i=0; i<n; i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}
