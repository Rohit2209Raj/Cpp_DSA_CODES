#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int arr[]={5,0,1,2,0,0,4,0,3};
  // 5,1,2,4,3,0,0,0,0;
//   for(int i=0;i<8;i++){
//     for(int j=0;j<8-i;j++){
//         if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//     }
//   }
for(int i=0;i<8;i++){
    for(int j=0;j<8-i;j++){
        if(arr[j]==0) swap(arr[j],arr[j+1]);
    }
  }
  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
}

/// KHUD SOLVE KAR DIYA MAINE///////