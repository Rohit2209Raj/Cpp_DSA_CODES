#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,2,34,43,22,1,2};
    sort(arr,arr+7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}

