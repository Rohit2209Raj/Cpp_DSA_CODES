#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,4,3,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            cout<<mid;
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            lo=mid+1;
        }

        else hi=mid-1;
    }
}