#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
             cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;

    }
}