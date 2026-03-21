#include<iostream>
using namespace std;
int main(){
    string grade,name;
    int marks[4],mark;
    float percent,sum=0.00;
    cout<<"Enter your name: ";
    getline(cin,name);
    
    cout<<"Enter the marks of four subject***********\n";
    for(int i=0;i<4;i++){
        cout<<"Enter the marks of subject "<<i<<" : ";
        cin>>mark;
        marks[i]=mark;
        sum=sum+marks[i];
    }
    percent=sum/400*100;
    if(percent>=60 && percent<=100){
        grade="first class";
    }
    else if(percent>=50 && percent<=59){
        grade="Second class";
    
    }
    else if(percent>=40 && percent<=49){
        grade="Pass";
    }
    else{
        grade="Fail";
    }
    cout<<"******Students Progress card******\n\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Marks of each subject is as follows: "<<endl;
    for(int i=0;i<4;i++){
        cout<<"Mark of subject "<<i<<" : "<<marks[i]<<endl;
    }
    cout<<"Total Percentage: "<<percent<<endl;
    cout<<"Grade: "<<grade<<endl;

    return 0;

}