#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,9,11,18,21,23};
    int target;
    cout<<"ENTER YOUR TAREGT: ";
    cin>>target;
    int idx=-1;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]>target){
            idx=i-1;
            break;
        }
        else continue;
    }
    cout<<endl;
    cout<<idx;
}