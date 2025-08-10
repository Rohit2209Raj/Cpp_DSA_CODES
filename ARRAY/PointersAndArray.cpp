#include<iostream>
using namespace std;

int main(){
     int arr[]={1,2,4,7,4};
     int size=sizeof(arr)/sizeof(arr[0]);
     int* ptr=arr; // giving address
     for(int i=0;i<=size-1;i++){
        cout<<ptr[i]<<" ";
        // cout<<*ptr<<endl;
        // *ptr++;
     }
     

}