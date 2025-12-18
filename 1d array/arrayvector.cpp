
#include<iostream>
#include<vector>
using namespace  std;
int main(){
    vector<int>v;
    v.push_back(2);//1 1
    v.push_back(4);// 2 2
    v.push_back(6);//3 4
    v.push_back(9);// 4 4
    v.push_back(10);//5 8
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }  
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
return 0;
}