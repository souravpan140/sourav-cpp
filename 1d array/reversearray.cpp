

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of coloums:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The array is:"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   int brr[n][m];
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
        }
    }
   cout<<"The transpose is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;   
    }
}