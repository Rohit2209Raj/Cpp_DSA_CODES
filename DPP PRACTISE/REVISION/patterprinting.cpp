#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the number: ";
    cin>>n;

    // Q4
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0) cout<<char(j+64);
    //         else cout<<j;
    //     }
    //     cout<<endl;
    // }


    // Q5
//     int m=2*n-1;
//     for(int i=1;i<=m;i++){
//             if(i<=n) {
//                 for(int j=1;j<=i;j++) cout<<"*";
//             }
//             else {
//                 int k=m-i+1;
//                 for(int j=1;j<=k;j++) cout<<"*";
//                 }
//         cout<<endl;
// }


// Q6
    //  int m;
    //  cout<<"enter columns: ";
    //  cin>>m;
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=m;j++){
    //         if(i==1||i==n||j==1||j==m) cout<<"*";
    //         else cout<<" ";
    //     }

    //     cout<<endl;
    //  }


    // SHEET -3 ASSIGNMENT
// Q2
        //  for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n-i;j++) cout<<" ";
        //     for(int k=1;k<=2*i-1;k++) cout<<char(k+64);
        //     cout<<endl;
        
        //  }


// Q3
      int m;
      cout<<"Enter the number of space +1: ";
      cin>>m;

      for(int i=1;i<=n+1;i++){
        if(i<=n){
        for(int j=1;j<=n-i;j++)cout<<j;
        cout<<"*";
        for(int k=1;k<=i-1;k++)cout<<k;
        cout<<"*";
      }
    //   else{
    //     int s=n-1;
    //     for(int j=1;j<=n-s;j++)cout<<j;
    //     cout<<"*";
    //     for(int k=;k<=2*k-1;k++)cout<<k;
    //     cout<<"*";
    //   }
      cout<<endl;
      }

}