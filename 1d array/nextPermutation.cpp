
#include<iostream>
using namespace std;
  void reverse(int a[],int i,int j){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
  }
    void nextpermutation(int a[],int n){
       int idx=-1;
       for(int i=n-2;i>=0;i--){
          if(a[i]<a[i+1]){
            idx=i;
            break;       
          }
        }
      if(idx==-1)  {
            reverse(a,0,n-1);
            
           }
          return;
      int j;
     for(int i=idx+1;i<n;i++){
      if(a[i]>a[idx]){
        j=i;
        swap(a[idx],a[j]);
        break;
      }
    }
    reverse(a,idx+1,n-1);
  }
    int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    nextpermutation(a,n);
    cout<<endl;
    for(int i=0;i<n;i++){
     cout<<a[i];
   }
}