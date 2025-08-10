#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6,9};
    for(int i=0;i<7;i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
    }
}