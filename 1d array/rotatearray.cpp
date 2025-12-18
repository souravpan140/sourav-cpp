

#include<iostream>
using namespace std;
#include<vector>
void reverse(int i,int j,vector<int>&v,int n){ 
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i];
    }   
}
int main(){
    int n,k;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"The target:";
    cin>>k;
   vector<int>v(n);
   cout<<"enter the element:";
   for(int i=0;i<n;i++){
     cin>>v[i];
   }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    if(k>n) k=k%n;
    reverse(0,n-1-k,v,n);
    reverse(n-k,n-1,v,n);
    reverse(0,n-1,v,n);
}