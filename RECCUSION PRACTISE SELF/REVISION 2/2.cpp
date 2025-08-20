#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
// Check if an array is sorted.
// bool check(int arr[],int idx,int n){
//     if(idx==n) return true;
//     if(arr[idx]>=arr[idx-1]) return check(arr,idx+1,n);
//     else return false;
// }
// int main(){
//     int arr[]={1,2,3,4,5,8,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<check(arr,1,n);
// }

// Find the maximum element in an array.
// int maxele(int arr[],int n){
//     if(n==0) return arr[0];
//     else return max(arr[n],maxele(arr,n-1));
// }
// int main(){
//     int arr[]={1,2,3,4,5,2,3,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<maxele(arr,n-1);
// }
// MANY APPROACHES FOR THIS QUESTION

// Find the first occurrence of a key in an array.
// int focc(int arr[],int k,int n,int idx=0){
//     if(idx==n) return -1;
//     if(arr[idx]==k) return idx;
//     else return focc(arr,k,n,idx+1);
// }
// int main(){
//     int arr[]={1,2,3,4,2,5,6,7,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<focc(arr,3,n);
// }

// Find the last occurrence of a key in an array.
// int focc(int arr[],int n,int k=3,int idx=0,int check=-1){
//     if(idx==n) return  check;
//     if(arr[idx]==k) check=idx;
//     return focc(arr,n,k,idx+1,check);
// }
// int main(){
//     int arr[]={1,2,3,4,2,5,6,7,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<focc(arr,n);
// }
//  DEFAULT ARGUMENTS MUST BE GIVEN FROM RIGHT TO LEFT WITH OUT ANY BREAK IN THEM  CHECK GPT FOR BETTER EXMPLES

// Reverse an array recursively.
// void reverse(int arr[],int i,int j){
//     if(i>=j) return;
//     int x=arr[i];
//     arr[i]=arr[j];
//     arr[j]=x;
//     reverse(arr,i+1,j-1);
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     cout<<endl;
//     reverse(arr,0,n-1);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
// }

// //  Check if an array is a palindrome recursively.
// bool check(int arr[],int i,int j){
//     if(i>=j) return true;;
//     if(arr[i]!=arr[j]) return false;
//     else return check(arr,i+1,j-1);
// }
// int main(){
//     int arr[]={1,2,3,2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<check(arr,0,n-1);
// }

// Replace all occurrences of a specific value in an array.
void change(int arr[],int i,int n,int k){
    if(i==n) return;
    if(arr[i]==k) arr[i]=-1;
    change(arr,i+1,n,k);
}
int main(){
    int arr[]={1,2,3,4,3,2,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    change(arr,0,n,3);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
