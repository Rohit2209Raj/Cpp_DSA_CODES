#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    int a=50,b=50;
    int arr[]={5,4,6,a,b,1};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
        
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<(int)(arr[i])<<" ";
    }

    



}