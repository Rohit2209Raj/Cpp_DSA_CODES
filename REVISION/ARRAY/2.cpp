#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,1,1,0,1,1,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(j>i){
        if(arr[i]==0)i++;
        if(arr[j]==1)j--;
        if(j<i) break; // always right;
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int ele:arr) cout<<ele<<" ";
}