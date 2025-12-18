

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
    v.push_back(2);//6 8
    v.push_back(4);// 7 8
    v.push_back(6);//8 8
    v.push_back(9);// 9 16
    v.push_back(10);//10 16
    cout<<"size is:"<<v.size()<<endl;
    cout<<"capacity is:"<<v.capacity()<<endl;
    v.pop_back();// for pop capacity same,size decrease.
    v.pop_back();
    cout<<"size is:"<<v.size()<<endl;
    cout<<"capacity is:"<<v.capacity()<<endl;
    
return 0;
}