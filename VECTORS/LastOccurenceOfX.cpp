#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int arr[]={1,3,2,4,3,4,1,6};
int x;
cin>>x;

//1st and better method
for(int i=7;i>=0;i--){
    if(arr[i]==x) {
        cout<<i;
        break;
    }
}
// int a;
// for(int i=0;i<=7;i++){
//     if(arr[i]==x){
//          a=i;
//     }
// }
// cout<<a;
  
}
