#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int check(int *p,int n){
    bool flag=true;
    for(int i=0;i<n;i++){
        if(p[i]>p[i+1]){
            //cout<<"not sorted";
            flag=false;
            break;
        }
        else flag=true;
    }
    if(flag==true) return 1;
    else return 0;;
}
int main(){
    int n;
    int arr[]={5,4,6,3,2,1};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // MY METHOD//////////
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //           swap(arr[j],arr[j+1]);
    //         }
    //     }
    //     if(check(arr,n)==1) break;
    //     else continue;

    // }

    /// OPTIMISED METHOD////////////
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              flag=false;
            }
        }
        if(flag==true) break;
        else continue;

    }


    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    



}