//////////// bhai kar hi diya maine solve yaar rohit tu to kammal hai salla //////////
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    // desire o/p 
    int putval=0;
    vector<int>v;
    int min=INT_MAX;
    int minidx=-1;
    for(int j=0;j<n;j++){
        min=INT_MAX;
        for(int i=0;i<n;i++){
            bool flag=true;
            // for(int k=0;k<v.size();k++){
            //     if(i==v[k]){
            //         flag=false;
            //         break;
            //     }
            //     else continue;
            // }
            
            if(arr[i]<min && flag==true){
             min=arr[i];
             minidx=i;
            }
         }
         //arr[minidx]=putval;
         v.push_back(minidx);
    }


    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        arr[v[i]]=putval;
        putval++;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // for(int i=0;i<n;i++){
    //     arr[i]=v[i];
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}