#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        //cout<<i<<endl;
        for(int j=i;j>0;j--){
            
             if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    cout<<endl;
    for(int ele: arr){
        cout<<ele<<" ";
    }
}


/////// KHUD KIYA HAI//////