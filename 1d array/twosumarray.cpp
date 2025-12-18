
#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n,x;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the target:";
    cin>>x;
   vector<int>v(n);
   cout<<"enter the element:";
   for(int i=0;i<n;i++){
     cin>>v[i];
   }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i+j==x){
                cout<<i<<","<<j<<endl;
            }
        }
    }


}