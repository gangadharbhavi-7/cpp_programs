#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter the binary number"<<endl;
   cin>>num;
   int pow=1;
   int dec=0;
while(num>0){
    int rem=num%10;
dec=dec+rem*pow;
pow*=2;
num/=10;

}
cout<<dec<<endl;
return 0;
}