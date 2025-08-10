#include<iostream>
using namespace  std;
int main(){
   int arr[]={3,3,3,3,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   bool flag=false;
    // Method 1
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    // method 2;
    int check[n]={0};
    for(int i=0;i<n;i++){
        if(check[arr[i]]==0) check[arr[i]]++;
        else if(check[arr[i]]==1) {
            cout<<arr[i];
            break;
        }
        }

    cout<<endl;
    cout<<endl;
    cout<<endl; 

    // method 3
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    } 
    int s=((n)*(n+1))/2;
    cout<<s-sum;
      


}