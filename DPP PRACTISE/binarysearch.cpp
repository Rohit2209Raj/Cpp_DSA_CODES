#include<iostream>
using namespace std;
int main(){
    /// SHEET 1///
    // Q1


    // int arr[]={1,2,3,3,4,4,4,5};
    // int lo=0;
    // int hi=7;
    // int x=3;
    // while(lo<=hi){
    //     int mid=(hi+lo)/2;
    //     if(arr[mid]==x){
    //        if(arr[mid+1]!=x) {
    //         cout<<mid;
    //         break;
    //        }
    //        else lo=mid+1;
    //     }
    //     else if(arr[mid]<x) lo=mid+1;
    //     else hi=mid-1;
    // }


    //Q2
    // int arr[]={0,0,0,0,0,0,0,0,0,1,1,1,1,1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int lo=0;
    // int hi=n-1;
    // int l0=-1;
    // while(lo<=hi){
    //     int mid=(lo+hi)/2;
    //     if(arr[mid]==0){
    //         if(arr[mid+1]!=0){
    //              l0=mid;
    //              //cout<<l0;
    //              break;
    //         }
    //         else lo=mid+1;
    //     }
    //     else hi=mid-1;
    // }
    // cout<<n-l0-1;

    /// Q3

    /*

    Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
    maximum number of 1’s.
    Input matrix : 0 1 1 1
    0 0 1 1
    1 1 1 1 // this row has maximum 1s
    0 0 0 0
    Output: 2

    */
     
    /// Q4
    // int arr[]={1,2,3,3,4};
    // for(int i=0;i<5;i++){
    //     if(arr[i]!=(i+1)) {
    //         cout<<arr[i];
    //         break;
    //     };
    // }

    // Q5
    // int x;
    // cout<<"Enter the number: ";
    // cin>>x;
    // int lo=0;
    // int hi=x;
    // bool flag=false;
    // while(hi>=lo){
    //     int mid=(lo+hi)/2;
    //     if(mid*mid==x){
    //         cout<<"perfect sqaure";
    //         flag=true;
    //         break;
    //     }
    //     else if(mid*mid<x)lo=mid+1;
    //     else hi=mid-1;
    // }
    // if(flag==false) cout<<"Not perfect square";

    // Q6
    int x;
    cout<<"Enter number of coins: ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        arr[i]=i+1;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    
}