#include<stdio>
using namespace std;
void main()
{
  cout<<"enter the value of a,b,c";
  cin>>a>>b>>c;
  a=b;
  b=c;
  c=a;
  cout<<"the values after swaping"<<a<<b<<c;
}
