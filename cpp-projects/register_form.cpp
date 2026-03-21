#include<iostream>
#include<fstream>
using namespace std;

class temp{
    string userName,Email,password;
    string searchName,searchEmail,searchpass;
    fstream file;
    public:
    void login();
    void signUp();
    void forgot();
}obj;

int main(){
    char choice;
    cout <<"\n1- Login";
    cout <<"\n2- Sign-up";
    cout <<"\n3- Forgot Password";
    cout <<"\n4- Exit";
    cout <<"\nEnter your choice: ";
    cin >> choice;
    switch(choice){
        case '1':
obj.login();

        break;
        case '2':
obj.signUp();
        break;
                case '3':
obj.forgot();
        break;
                case '4':
return 0;
        break;
  default:
  cout << "Invalid choice.....!";

    }
}

void temp:: signUp(){
    cout <<"\nEnter Your user Name: ";
    getline(cin,userName);
    cout <<"Enter Your Email Address: ";
    getline(cin,Email);
    cout <<"Enter Your Password: ";
    getline(cin,password);
    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}

void temp :: login(){
    string search;
    cout <<"---------LOGIN----------"<<endl;
    cout <<"Enter Your user Name: "<<endl;
    getline(cin,searchName);
    cout<<"Enter your password: "<<endl;
    getline(cin,searchpass);
    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
while(!file.eof()){
    if(userName==searchName){
        if(password==searchpass){
            cout<<"\nAccount Login successfull....!";
            cout<<"\nuserName::"<<userName<<endl;
            cout<<"\nEmail :: "<<Email<<endl;
           
        }else{
            cout<<"\nPassword is incorrect....!";
        }
    }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
}
file.close();
}

void temp :: forgot(){
    cout<<"\nEnter Your userName :: ";
    getline(cin,searchName);
    cout<<"\nEnter your Email address :: ";
    getline(cin,searchEmail);
    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName==searchName ){
if(Email==searchEmail){
    cout<<"\nAccount Found....!"<<endl;
    cout<<"Your password :: "<<password<<endl;
}else{
    cout<<"Not found.....!";
}
        }
    }
    file.close();
}