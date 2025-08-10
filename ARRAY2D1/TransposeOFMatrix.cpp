#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
             cin>>arr[i][j];
        }
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }



}