


#include<iostream>
using namespace std;
int main(){
int n,pos;
cout<<"The size of array:";
cin>>n;
int arr[n];
cout<<"The element of array is:";
 for(int i=0;i<=n-1;i++){
   cin>>arr[i];
   }
cout<<"The array is:\n";
  for(int i=0;i<=n-1;i++){
   cout<<arr[i]<<" "; 
   }
   cout<<"Enter the position:";
   cin>>pos;
   for(int i=pos-1;i<=n-1;i++){
    arr[i]=arr[i+1];
   }
    n--;
   for(int i=0;i<=n-1;i++){
   cout<<arr[i]<<" "; 
   }
      return 0;
}