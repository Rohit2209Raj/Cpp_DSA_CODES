#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements: ";
cin>>n;
int max=INT_MIN;
int Smax=INT_MIN;
 int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     for(int i=0;i<=n-1;i++){
         if(arr[i]>max) max=arr[i];
     }
     for(int i=0;i<=n-1;i++){
        if(arr[i]>Smax && arr[i]!=max) Smax=arr[i];
     }

     cout<<max<<" "<<Smax;

}
        