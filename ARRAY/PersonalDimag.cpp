#include<iostream>
using namespace std;
int array(int n){
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
       sum+=arr[i];
    }
    cout<<endl;
    cout<<sum;
    

}
int main(){
int n;
cout<<"Enter the number of elements: ";
cin>>n;
array(n);


}
