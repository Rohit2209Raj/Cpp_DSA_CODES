#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;

}