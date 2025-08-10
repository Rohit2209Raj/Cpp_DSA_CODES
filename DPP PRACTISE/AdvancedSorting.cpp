#include<iostream>
#include<vector>
using namespace std;
                // SHEET 1 //
// Q1

// void merge(vector<int>v1,vector<int>v2,vector<int>&v){
//       int i=0;
//       int j=0;
//       int k=0;
//       while(i<v1.size() && j<v2.size()){
//          if(v1[i]>=v2[j]){
//               v[k++]=v1[i++];
//          }
//          else{
//             v[k++]=v2[j++];
//          }
//       }
//       if(i==v1.size()) while(j<v2.size()) v[k++]=v2[j++];
//       else while(i<v1.size()) v[k++]=v1[i++];
// }
// void mergeSort(vector<int>&v){
//     if(v.size()==1|| v.size()==0) return;
//     int n=v.size();
//     int n1=n/2;
//     int n2=n-n1;
//     vector<int>v1(n1);
//     vector<int>v2(n2);
//     for(int i=0;i<n1;i++) v1[i]=v[i];
//     for(int i=n1;i<n;i++) v2[i-n1]=v[i];
//     mergeSort(v1);
//     mergeSort(v2);
//     merge(v1,v2,v);
//     //v1.clear();
//     //v2.clear();
// }
// int main(){
//     int arr[]={5,1,0,4,8,4,7,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);
//     for(int i=0;i<n;i++) cout<<v[i]<<" ";
//     mergeSort(v);
//     cout<<endl;
//     for(int i=0;i<n;i++) cout<<v[i]<<" ";
// }
                  
// Q2

