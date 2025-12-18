
#include<iostream>
#include<vector>
using namespace std;
void height(vector<int>&v,int n){
    int prev[n];
    prev[0]=-1;
    int max=v[0];
    for(int i=1;i<n;i++){
     prev[i]=max;
      if(max<v[i]) max=v[i];
    }
    int next[n];
      max=v[n-1];
    for(int i=n-2;i>=0;i--){
      next[i]=max;
      if(max<v[i]) max=v[i];
    }
    for(int i=1;i<n-1;i++){
      prev[i]=min(next[i],prev[i]);
    }
    int water=0;
    for(int i=1;i<n-1;i++){
       if(prev[i]>v[i]){
        water+=(prev[i]-v[i]);
       }
      }
       cout<<endl<<"The answer is="<<water;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    cout<<endl<<"The array is:";
    for(int i=0;i<n;i++){
      cout<<v[i];
    }
    height(v,n);
}
