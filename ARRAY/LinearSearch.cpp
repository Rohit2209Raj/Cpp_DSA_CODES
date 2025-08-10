#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements: ";
cin>>n;
 int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     cout<<"Enter the element to find: ";
    int x;
   cin>>x;
   bool flag=false; // using of bool as check mark;
 for(int i=0;i<=n-1;i++){
      if(arr[i]==x) {
        flag=true; cout<<"yes"<<" "<<i;
        break;
      }
 }
 if(flag==false) cout<<"NO";


}
        