#include<iostream>
#include<vector>
using namespace std;
void skip_ele(int arr[],vector<int>&sol,int idx,int n){
        int ele=arr[idx];
        if(idx==n) {
        for(int i=0;i<sol.size();i++) cout<<sol[i]<<" ";
        return;
        }
        if(ele==1){
        skip_ele(arr,sol,idx+1,n);
        }
        else {
        sol.push_back(ele);
        skip_ele(arr,sol,idx+1,n);
        }
}
int main(){
    int arr[]={1,2,3,1,1,4,1,7};
    vector<int>sol;
    int n=sizeof(arr)/sizeof(arr[0]);
    skip_ele(arr,sol,0,n);
}