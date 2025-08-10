#include<iostream>
#include<vector>
using namespace std;
void subseq(int arr[],int n,int k,int idx,vector<int>v,vector<vector<int>>&final){
   if(idx==n){
        final.push_back(v);
        return;
   }
   int x=arr[idx];
   subseq(arr,n,k,idx+1,v,final);
   v.push_back(x);
   subseq(arr,n,k,idx+1,v,final);
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    int k;
    cout<<"Enter k: ";
    cin>>k;
    vector<int>v;
    vector<vector<int>>final;
    subseq(arr,n,k,0,v,final);
   vector<vector<int>>finalsol;
    for(int i=0;i<final.size();i++){
        for(int j=0;j<final[i].size();j++){
           if(final[i].size()==k) cout<<final[i][j];
        }
        cout<<endl;
   }


}
// kosis karo ki void fun se hi direct print karo no need tostore
