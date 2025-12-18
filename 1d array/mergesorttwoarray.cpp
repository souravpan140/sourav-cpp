
#include<iostream>
using namespace std;
void merge(int a1[],int a2[],int a3[],int n,int m){
    int i=0,j=0,k=0;
    while(i<n && j<m){
     if(a1[i]<a2[j]){
        a3[k]=a1[i];
        i++;
        k++;
     }
     else {
        a3[k]=a2[j];
        j++;
        k++;
     }
    }
     if(j==m){
    while(i<n){
        a3[k]=a1[i];
        i++;
        k++;
    }
  }
  if(i==n){
     while(j<m){
        a3[k]=a2[j];
        j++;
        k++;
    }
  }
  
  
cout<<endl<<"The merge array is:";
      for(int k=0;k<m+n;k++){
        cout<<a3[k]<<" ";
      }
    }
   

int main(){
  int n,m;
  cout<<"size of first array:";
  cin>>n;
  cout<<"size of second array:";
  cin>>m;
  int a1[n],a2[m],a3[m+n];
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

      merge(a1,a2,a3,n,m);
}