#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile("Example.txt");
    if(!outFile)
{
    cout<<"Error creating file!"<<endl;
    return 1;
}
outFile<<"Hello, this is my adda."<<endl;
outFile<<"Welcome to c++ programming . "<<endl;
outFile.close();
ifstream inFile("Example.txt");
if(!inFile){
    cout<<"Error opening file!"<<endl;
    return 1;
}
string line;
while(getline(inFile,line)){
    cout<<line<<endl;
}
inFile.close();
return 0;
}