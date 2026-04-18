#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,3,4,4,2};
    int c_max = 0, m_max = 0;
    for(int i=0;i<5;i++){
        c_max = max(arr[i],c_max+arr[i]);
        m_max = max(c_max,m_max);

    }
    cout<<m_max;
    return 0;
}