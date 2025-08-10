#include<iostream>
using namespace std;
void revarray(int *arr,int i,int j){
    int m=sizeof(arr)/sizeof(arr[0]);
    while(j>i){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={6,1,4,2,3,8,5,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int k;
    cout<<"Enter rotation: ";
    cin>>k;
    if(k>n) k=k%n;
    revarray(arr,0,n-k-1);
    revarray(arr,n-k,n-1);
    revarray(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}