#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //TIME COMLEXITY O(n2);
    // SPACE COMPLEXITY O(1);
    int n;
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-(i);j++){ // added -(i) afterwards
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    



}