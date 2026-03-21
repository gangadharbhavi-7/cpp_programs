#include<iostream>
using namespace std;
int main(){
    int a,b,c,largest,smallest;
    
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    largest=a;
    if(b>largest)
    largest=b;
    if(c>largest)
    largest=c;
    smallest=a;
    if(b<smallest)
    smallest=b;
    if(c<smallest)
    smallest=c;
    int second_largest=(a+b+c)-(largest+smallest);
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Smallest number: "<<smallest<<endl;
    cout<<"Second largest number: "<<second_largest<<endl;
 
}