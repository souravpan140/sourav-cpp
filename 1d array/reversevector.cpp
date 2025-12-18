
#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
   vector<int>v(n);
   cout<<"enter the element:";
   for(int i=0;i<n;i++){
     cin>>v[i];
   }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
     cout<<endl;
     cout<<"The reverse array is:";
     for(int i=n-1;i>=0;i--){
      cout<<v[i];
     }
}  
    