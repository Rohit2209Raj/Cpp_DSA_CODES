#include<iostream>
using namespace std;
int main(){
  int arr[]={1,3,5,7,11,15};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target ;
  cout<<"ENTER THE TARGET: ";
  bool flag=false;
  cin>>target;
  int lo=0;
  int hi=n-1;
  int mid;
  while(hi>=lo){
    mid=lo+(hi-lo)/2;
    if(arr[mid]==target) {
        flag=true;
        cout<<arr[mid-1];
        break;
        }
    else if(arr[mid]<target){
        if(arr[mid+1]>target) {
            flag=true;
            cout<<arr[mid]; 

            break;
            }
        else  lo=mid+1; 
    }
    else hi=mid-1;
  }
  if(flag==false)cout<<arr[hi];
}