#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    int arr[]={5,4,6,3,2,1};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              flag=false;
            }
        }
        if(flag==true) break;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    



}