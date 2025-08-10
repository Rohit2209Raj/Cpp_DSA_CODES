#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,2,2,0,2,0,2,1,2,1,1,2,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int mid=0;
    int j=n-1;
    while(mid<=j){
        if(arr[mid]==2){
            swap(arr[mid],arr[j]);
            j--;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[i]);
            mid++;
            i++;
        }
        else mid++;
    }
    for(int ele:arr) cout<<ele<<" ";
}