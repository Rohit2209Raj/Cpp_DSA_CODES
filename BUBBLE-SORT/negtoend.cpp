#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int arr[]={5,0,-1,2,-5,-9,4,-2,3};
for(int i=0;i<8;i++){
    for(int j=0;j<8-i;j++){
        if(arr[j]<0) swap(arr[j],arr[j+1]);
    }
  }
  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
}

