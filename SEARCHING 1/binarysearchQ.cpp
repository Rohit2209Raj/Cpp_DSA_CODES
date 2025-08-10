#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    // while(hi>=lo){
    //    int mid=lo+(hi-lo)/2;
    //    if(arr[mid]==mid){
    //     lo=mid+1;
    //    }
    //    if(arr[mid]!=mid){
    //     hi=mid-1;
    //    }
    // }

    // SIR solution
    int ans=-1;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
         lo=mid+1;
        }
        if(arr[mid]!=mid){
         ans=mid;
         hi=mid-1;
        }
     }
    cout<<ans;
}


//// KHUD SOLVE KAR DIYA MAINE GAJAB HAI ROHIT TU TO YAAR/////