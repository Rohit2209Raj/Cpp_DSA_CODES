#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    vector<int>v(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
    int mindx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else  {
                if(arr[j]<min){
                min=arr[j];
                mindx=j;
                }
        }
        }
        v[mindx]=1;
        arr[mindx]=x;
        x++;
        }

        for(int ele: arr){
            cout<<ele<<" ";
        }
}

/*
Simple go to command palette using Ctrl+Shift+P
search "format"
and select "Format document with"
and simply select "C/C++"
*/