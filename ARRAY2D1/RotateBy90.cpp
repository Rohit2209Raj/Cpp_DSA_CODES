#include<iostream>
#include<algorithm>
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

    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=m-1;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        int j=0;
        int k=m-1;
        while(j<k){
            swap(arr[i][j],arr[i][k]);
            j++;
            k--;
        }
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }





}