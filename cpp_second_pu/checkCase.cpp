#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        cout<<"The character is in upper case";
        }
        else if(ch>='a' and ch<='z'){
            cout<<"The character is in lower case";
        }
        else
        cout<<"The character is not an alphabet";
        return 0;
}