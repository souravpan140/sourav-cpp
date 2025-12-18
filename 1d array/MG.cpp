
#include<iostream>
using namespace std;
void merge(int a1[],int a2[],int n,int m){
    int i=n-1,j=m-1,k=m+n-1;
    while(i>=0 && j>=0){
     if(a1[i]<a2[j]){
        a2[k]=a2[j];
        j--;
        k--;
     }
     else {
        a2[k]=a1[i];
        i--;
        k--;
     }
    }
     if(j<0){
    while(i>=0){
        a2[k]=a1[i];
        i--;
        k--;
    }
  }
  if(i<0){
     while(j>=0){
        a2[k]=a2[j];
        j--;
        k--;
    }
  }
  
  
cout<<endl<<"The merge array is:";
     for(int k=0;k<m+n;k++){
        cout<<a2[k];
     } 
    }
   

int main(){
  int n,m;
  cout<<"size of first array:";
  cin>>n;
  cout<<"size of second array:";
  cin>>m;
  int a1[n],a2[m];
  cout<<"the element of first array:";
  for(int i=0;i<n;i++){
    cin>>a1[i];
  }
  for(int i=0;i<n;i++){
    cout<<a1[i]<<" ";
  }
  cout<<endl<<"the element of second array:";
  for(int j=0;j<m;j++){
    cin>>a2[j];
  }
  for(int j=0;j<m;j++){
    cout<<a2[j]<<" ";
  }

      merge(a1,a2,n,m);
}