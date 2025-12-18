
#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    v.at(2)=50;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

  return 0;
}