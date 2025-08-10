#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int arr[m][n];
    int brr[p][q];
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
             cin>>arr[i][j];
        }
    }
    cout<<endl;
     for(int i=0;i<=p-1;i++){
        for(int j=0;j<=q-1;j++){
             cin>>brr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<=p-1;i++){
        for(int j=0;j<=q-1;j++){
             cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
   
    int res[m][q];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=q-1;j++){
            res[i][j]=0;
           for(int k=0;k<=p-1;k++){
            res[i][j]+=arr[i][k]*brr[k][j];
           }
           
        }
    }
       
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=q-1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    


} 
