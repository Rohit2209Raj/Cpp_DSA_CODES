#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
     int n;
    cout<<"Enter number of elemnts in array: ";
    cin>>n;
    int arr[n];
     for(int i=0;i<=n-1;i++){
        cin>>arr[i];
     }
     for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
     }
    // Sheet  1
    // Q1
    //  int mul=1;
    // int arr[5]={1,2,3,4,10};
    // for(int i=0;i<=4;i++){
    //      mul = mul*arr[i];
    // }
    // cout<<mul;

    // Q2
   
    //  int a;
    //  int max=INT_MIN;
    //  int smax=INT_MIN;
    //  for(int i=0;i<=n-1;i++){
        
       
    //  }
    //   cout<<endl;
    //  cout<<max<<" "<<smax;


    // Q3
    // int min=INT_MAX;
    // for(int i=0;i<=n-1;i++){
    //     if(arr[i]<min) min=arr[i];
    // } 
    // cout<<endl;
    // cout<<min;


    // Q4
//      bool flag=false;
//     for(int i=0;i<=n-1;i++){
//         for(int j=i+1;j<=n-1;j++){
//             if(arr[i]==arr[j]) {
//                 flag=true;
//                 cout<<endl; 
//                 cout<<arr[i];
//                 break;
//             }
            
//         }
//     }
//    // if(flag==true) cout<<"duplicate";
//     if(flag==false) cout<<"No duplicate";

      
                                    //   SHEET 3

// Q1
// cout<<endl;
// int x;
// cout<<"Enter the triplet sum: ";
// cin>>x;
// bool flag=false;
// for(int i=0;i<=n-1;i++){
//     for(int j=i+1;j<=n-1;j++){
//         if(arr[i]+arr[j]<x){
//             for(int k=j+1;k<=n-1;k++){
//                 if(arr[i]+arr[j]+arr[k]==x){ 
//                     flag=true;
//                   cout<<"Found"<<" "<<i<<" "<<j<<" "<<k<<endl;
//                   }
//             }
//         }
        
//     }
// } 

// if(flag==false) cout<<"No triplet found";

// Q2



//Q3
// bool flag=false;
// bool check=false;
// vector<int>v;
// for(int i=0;i<=n-1;i++){
//     if(v.size()>=1){
//       for(int o=0;o<=v.size()-1;o++) {
//          if(v[o]==arr[i])  check=true;
//          }
//          }

//     if(check==true) break;      
    
//     for(int j=i+1;j<=n-1;j++){
//         if(arr[i]!=arr[j]){
//          flag=false;
//          continue;
//         }
//         else{
//          flag=true;
//          v.push_back(arr[i]);
//          break;
//         }
//     }
//     cout<<endl;
//     if(flag==false) cout<<"Non duplicate element is: "<<arr[i];
//     //else cout<<"Not found for "<<arr[i]<<" ";
//     //cout<<endl<<"size of vector is : "<<v.size();
    
    

//     }

           //BHAI KAM SE KAM BHI TO 2 HOURS LAGE HAI ISKO SOLVE KRNE ME SALLAR BADI MUSKIL SE SOLVE HUA HAI;
     


// Q4
   //  int m;
   //  cout<<endl;
   //  cout<<"Enter number of elemnts in Subarray: ";
   //  cin>>m;
   //  int arr2[m];
   //   for(int i=0;i<=m-1;i++){
   //      cin>>arr2[i];
   //   }
   //   for(int i=0;i<=m-1;i++){
   //      cout<<arr2[i]<<" ";
   //   }
     
   //    bool flag=true;
   //    for(int i=0;i<=m-1;i++){
   //      for(int j=0;j<=n-1;j++){
   //              if(arr2[i]==arr[j]){
   //                flag=true;
   //                break;
   //              }
   //              else flag=false;
   //      }
   //    if(flag==false) break;
   // }
   //   if(flag==true) cout<<" FOUND";  
   //   else cout<<"NOT FOUND";   








}