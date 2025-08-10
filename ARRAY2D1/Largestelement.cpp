#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   int max=INT_MIN;
   int smax=INT_MIN;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]>max) max=arr[i][j];
    }
   }
   cout<<max<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]>smax && arr[i][j]!=max) smax=arr[i][j];
    }
   }
   cout<<smax<<endl;
   
   int sum=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sum+=arr[i][j];
    }
   }
   cout<<sum;
}