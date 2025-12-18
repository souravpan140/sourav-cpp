
#include<iostream>
using namespace std;
#include<vector>
void reverse(int i,int j,vector<int>v,int n){ //in vector address pass
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
    reverse(2,3,v,n);
    reverse(0,n-1,v,n);
}