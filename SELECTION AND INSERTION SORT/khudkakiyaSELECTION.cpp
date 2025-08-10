#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int min;
    int minidx;
    int arr[]={1,2,3,4};
    bool flag;
    for(int i=0;i<4;i++){
         min=arr[i];
         cout<<i<<endl;
         flag=true;
        for(int j=i+1;j<5;j++){
            if(arr[j]<min) {
                min=arr[j];
                minidx=j;
                flag=false;
            }
        }
        if(flag==true) break;
        swap(arr[i],arr[minidx]);
        
    }

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int ele: arr){
        cout<<ele<<" ";
    }
}



///////// KHUD KA BANAYA SELECTION SORT GAJAB HAI ROHIT TU  TO YAAR/////