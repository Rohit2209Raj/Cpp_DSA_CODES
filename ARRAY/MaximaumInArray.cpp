#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements: ";
cin>>n;
int max=INT_MIN;
 int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     for(int i=0;i<=n-1;i++){
         if(arr[i]>max) max=arr[i];
     }
     cout<<"Max element is: "<<max;

}



/* BETTER SOLUTION
int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            imax=i;
    }
    //else continue;
    }
    cout<<max<<" "<<imax;
    */
        