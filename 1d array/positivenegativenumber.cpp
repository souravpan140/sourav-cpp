
#include<iostream>
using namespace std;
#include<vector>
 void sort(vector<int>&v,int n){//use two pointer
    int i=0;
    int j=n-1;
    while(i<j){
     if(v[i]<0) i++;
     else if(v[j]>0) j--;
     else if(v[i]>0 && v[j]<0){
      int temp=v[i];
      v[i]=v[j];
      v[j]=temp;
      i++;
      j--;
     }
    }
    cout<<endl;
    for(int i=0;i< n;i++){
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
   cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    sort(v,n);
}