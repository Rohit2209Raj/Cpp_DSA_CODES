#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target ;
    cout<<"ENTER THE TARGET: ";
    cin>>target;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                cout<<mid;
                flag=true;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
    
}


/// KHUD SE KIYA HAI MAINE////
