#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

void display2(vector<int>&v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int main(){
    int arr[]={2,1,3,6,9,0,2,7};
    vector<int>v(8);
    for(int i=0;i<8;i++){
        v[i]=arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,8,0);
    cout<<endl;
    display2(v,0);
}