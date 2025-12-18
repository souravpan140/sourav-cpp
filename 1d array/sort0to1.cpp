
#include<iostream>
using namespace std;
#include<vector>
void zeroandone(vector<int>&v,int n){ //use basic code
   int noz=0;
   int noo=0;
  for(int i=0;i<n;i++){
    if(v[i]==0) noz++;
    else noo++;
  } 
  for(int i=0;i<n;i++){
    if(i<noz){
     v[i]=0;
    }
    else v[i]=1;
  }
  cout<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i];
   }
  }
   void zeroandone1(vector<int>&v,int n){//use two pointer
    int i=0;
    int j=n-1;
    while(i<j){
     if(v[i]==0) i++;
     else if(v[j]==1)j--;
     else if(v[i]==1&&v[j]==0){
      v[i]=0;
      v[j]=1;
      i++;
      j--;
     }

    }
    cout<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i];
   }
}
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
    zeroandone(v,n);
    zeroandone1(v,n);
}