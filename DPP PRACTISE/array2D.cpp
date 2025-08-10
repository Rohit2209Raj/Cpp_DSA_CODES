#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
                                                  // SHEET 1
    // Q1
//   int arr[5][5];
//   for(int i=0;i<=4;i++){
//     for(int j=0;j<=4;j++){
//         arr[i][j]=10;
//     }
//   }
//   for(int i=0;i<=4;i++){
//     for(int j=0;j<=4;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

    //  Q2

    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int brr[3][3]={9,8,7,6,5,4,3,2,1};
    // int res[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //          res[i][j]=arr[i][j]+brr[i][j];
    //     }
    // }   
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //          cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }   

    // Q3

//     1  2  -3   4
//     0  0  -4   2
//     1 -1   2   3 
//    -4 -5  -7   0 


    //Q4

    // int max=INT_MIN;
    // int smax=INT_MIN;
    // int n;
    // cin>>n;
    // int m;
    // cin>>m;
    // int res[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>res[i][j];
    //     }
    // } 
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(res[i][j]>max) max=res[i][j];
    //     }
    // } 
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(res[i][j]>smax && res[i][j]!=max) smax=res[i][j];
    //     }
    // } 
    // cout<<"THE MX ELEMT IS: ";  
    // cout<<max<<"\n";
    // cout<<"THE sMX ELEMT IS: ";  
    // cout<<smax;


    // Q5

    // int n;
    // cin>>n;
    // int m;
    // cin>>m;
    // int res[n][m];
    // int rsum=0;
    // int maxsum=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>res[i][j];
    //     }
    // }
    // for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=m-1;j++){
    //          rsum+=res[i][j];
    //     }
    //     // if(rsum>maxsum) maxsum=rsum;
    //     // rsum=0;
    //     maxsum=max(maxsum,rsum);
    //     rsum=0;

    // }
    // cout<<maxsum;


    // Q6
    
    // void midprint(int arr[][3],int n,int k ){
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<k;j++){
    //             if(i==n/2 || j==k/2){
    //                 cout<<arr[i][j];
    //             }
    //         }
    //         cout<<endl;
    //     }
          
    // }
    // int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int length=sizeof(arr)/sizeof(arr[0][0]);
    // //   2
    // // 4 5 6
    // //   8
    // midprint(arr,3,3);



                                                         // SHEET 2
    //   Q1
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if((i==j) || ((i+j)==2)){
    //             cout<<arr[i][j];
    //         }
    //         else cout<<" ";
    //         }
    //         cout<<endl;
    //     }   

    // Q2
     
   //   int arr[3][3]={1,2,3,4,5,6,7,8,9};
   //   int brr[3][3];
   //   for(int i=0;i<3;i++){
   //      for(int j=0;j<3;j++){
   //          brr[i][j]=arr[j][i];
   //      }
   //   }
   //   for(int i=0;i<3;i++){
   //      for(int j=0;j<3;j++){
   //         cout<<brr[i][j]<<" ";
   //      }
   //      cout<<endl;
   //   }

   //  for(int j=0;j<3;j++){
   //    int i=0;
   //    int k=2;
   //    while(k>i){
   //       swap(brr[i][j],brr[k][j]);
   //       i++;
   //       k--;
   //    }
   //  }
   //  for(int i=0;i<3;i++){
   //      for(int j=0;j<3;j++){
   //         cout<<brr[i][j]<<" ";
   //      }
   //      cout<<endl;
   //   }

   // Q3
//    int arr[3][3]={1,2,3,4,5,6,7,8,9};
//    for(int j=0;j<3;j++){
//       if(j%2==0){
//         for(int i=2;i>=0;i--){
//         cout<<arr[i][j]<<" ";
//     }
//       }
            
      
//       else{
//          for(int i=0;i<3;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         }
//    }

//    Q5

// int main(){
//  int a[][2] = {{1,2},{3,4}};
//  int i, j;
//  for (i = 0; i < 2; i++)
//  for (j = 0; j < 2; j++)
//  cout << a[i][j];
//  return 0;



//    Q4

// int arr[3][3]={1,2,3,8,9,4,7,6,5};
// int minc=0;
// int maxc=2;
// int minr=0;
// int maxr=2;

// while(minc<=maxc && minr<=maxr){
//     for(int j=minc;j<=maxc;j++){
//         cout<<arr[minr][j]<<" ";
//     }
//     if(minc>maxc || minr>maxr) break;
//     minr++;

//     for(int i=minr;i<=maxr;i++){
//         cout<<arr[i][maxc]<<" ";
//     }
//     if(minc>maxc || minr>maxr) break;
//     maxc--;
    
//     for(int j=maxc;j>=minc;j--){
//         cout<<arr[maxr][j]<<" ";
//     }
//     if(minc>maxc || minr>maxr) break;
//     maxr--;

//     for(int i=maxr;i>=minr;i--){
//         cout<<arr[i][minc]<<" ";
//     }
//     if(minc>maxc || minr>maxr) break;
//     minc++;

// }

       

   
    
     

    
    
    
    

}