

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"The size of array:";
cin>>n;
int arr[n];
cout<<"The element of array is:\n";
 for(int i=0;i<=n-1;i++){
   cin>>arr[i];
   }
cout<<"The array is:\n";
for(int i=0;i<=n-1;i++){
   cout<<arr[i]<<" "; 
   }
   int max=arr[0];
   int min=arr[0];
   for(int i=0;i<=n-1;i++){
    if(arr[i]>max){
     max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
   }
cout<<"The max is="<<max<<endl;
cout<<"the min is="<<min;
   return 0;
}
