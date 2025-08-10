// confusing code likha hai maine sir ka dekhna please
// only for unique elements only
// for non unique go for loops
#include<iostream>
#include<vector>
using namespace std;
void subarray(int arr[],vector<int>temp,vector<vector<int>>&sol,int idx,int n){
    if(idx==n){
        sol.push_back(temp);
        return;
    }
    int x=arr[idx];
    if(idx>0 && temp.size()>0){
    if(arr[idx-1]==temp[temp.size()-1]){
    subarray(arr,temp,sol,idx+1,n);
    temp.push_back(x);
    subarray(arr,temp,sol,idx+1,n);
    }
    else{
        subarray(arr,temp,sol,idx+1,n);
    }
    }
    else{
    subarray(arr,temp,sol,idx+1,n);
    temp.push_back(x);
    subarray(arr,temp,sol,idx+1,n);
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    vector<vector<int>>sol;
    subarray(arr,temp,sol,0,n);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}