#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[8]={1, -1, 3, 2, -7, -5, 11, 6 };
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
        // int pcount=0;
        // int ncount=0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>=0) pcount++;
        //     else ncount++;
        // }
        // cout<<pcount<<" "<<ncount;
        // for(int i=0;i<n;i++){
        //    if(i<pcount){
        //     if(arr[i]>=0)sol[i]=arr[i];
        //    }
           
        // }

        for(int i=0;i<n;i++){
            if(arr[i]>=0) v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0) v.push_back(arr[i]);
        }

        for(int i=0;i<n;i++){
            cout<<v[i]<<" "; 
        }

        
}