#include<iostream>
using namespace std;
int sumofnum(int n[],int t){
    int sum=0;
    for(int i=0;i<t;i++){
        sum=sum+n[i];
    }
    return sum;
}

double avgofnum(int n[],int t){
    double sum=sumofnum(n,t);
    return sum/t;
}
int main(){
    int n[100],t;
    cout << "Enter a number: ";
    cin>>t;
  cout<<"Enter "<<t<<" numbers: ";
  for(int i=0;i<t;i++){
    cin>>n[i];

  }
 int sum=sumofnum(n,t);
 double avg=avgofnum(n,t);
  cout<<"Sum of "<<t<<" numbers is: "<<sum<<endl;
  cout<<"average of "<<t<<" numbers is : "<<avg<<endl;
  return 0;
}