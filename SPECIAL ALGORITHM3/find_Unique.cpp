#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,4,5,5,1,6,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int unq=arr[0];
    for(int i=1;i<n;i++){
        unq=unq^arr[i];
    }
    cout<<unq;
}