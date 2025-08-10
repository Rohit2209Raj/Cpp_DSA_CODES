#include<iostream>
using namespace std;
int main(){
    int m1,n1,m2,n2;
    cin>>n1>>m1>>n2>>m2;
    int arr1[m1][n1];
   int  arr2[m2][n2];
   bool flag;
   if(m1!=m2 || n1!=n2) flag=false;
   if(flag=false){
    cout<<"Wrong input";
    return -1;
   }
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
            cout<<"arr1...";
        cin>>arr1[i][j];
   }
   }
   for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
        cout<<"arr2...";
        cin>>arr2[i][j];
   }
   }
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        arr1[i][j]=arr1[i][j]+arr2[i][j];
    }
   }
   for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        cout<<arr1[i][j]<<" ";
   }
   cout<<endl;
   }

   }
