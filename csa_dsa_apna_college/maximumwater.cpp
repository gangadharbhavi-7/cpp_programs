#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(20);
    cout<<"The elements in the vector are: ";
    for(int i=0;i<=ans.size();i++){
        cout<<i<<":"<<ans[i]<<endl;
    }
    
}