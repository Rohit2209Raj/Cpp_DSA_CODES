#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,vector<vector<int> >&v,int idx,vector<int>temp){
     if(idx==n){
        v.push_back(temp);
        return;
     }
     int nums=arr[idx];
     subset(arr,n,v,idx+1,temp);
     temp.push_back(nums);
     subset(arr,n,v,idx+1,temp);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int> >v;
    vector<int>temp;
    subset(arr,n,v,0,temp);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}