#include<iostream>
using namespace std;
int main(){
  int arr[]={1,3,5,6,7,11,15,19,21,24};
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
    else if(arr[mid]<target) lo=mid+1;
    else hi=mid-1;
  }
  cout<<endl;
  if(flag==false) cout<<arr[lo];
  
  
}