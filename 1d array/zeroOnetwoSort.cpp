
#include<iostream>
using namespace std;
#include<vector>
void zeroandone(vector<int>&v,int n){ //use basic code
   int noz=0;
   int noo=0;
   int noT=0;
  for(int i=0;i<n;i++){
    if(v[i]==0) noz++;
    else if(v[i]==1) noo++;
    else noT++;
  } 
  for(int i=0;i<n;i++){
    if(i<noz){
     v[i]=0;
    }
   else if(i<(noz+noo)){
        v[i]=1;
    }
    else v[i]=2;
  }
  cout<<endl;
   for(int i=0;i<n;i++){
    cout<<v[i];
   }
  }
  void sort012(vector<int>&v,int n){
    int low=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
          int temp=v[mid];
           v[mid]=v[hi];
           v[hi]=temp;
           hi--;
        }
        else if(v[mid]==0){
          int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else mid++;
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
    sort012(v,n);
   zeroandone(v,n);
}