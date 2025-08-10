#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int n=5;
    // 4 passes;
    //0-3;
    bool flag;
    for(int i=0;i<4;i++){
        cout<<i<<endl;
        //0-3
        flag=true;
      for(int j=0;j<4-i;j++){   // for more optimisation
        if(arr[j]>arr[j+1]) {  
            swap(arr[j],arr[j+1]);
            flag=false;
      }
      }
      if(flag==true) break; 

     // check(arr,n);

    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}