#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"enter your number of rows : ";
    cin>>n;
    // for(int i=1;i<=n;i++){


    //     if(i==(n/2)+1){
    //         for(int j=1;j<=n;j++){
    //             cout<<"*";
    //         }
    //     }

    //     else{
    //          for(int j=1;j<=n;j++){
    //             if(j==(n/2)+1){
    //                 cout<<"*";
    //             }

    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //     }

    //     cout<<endl;


    // }


    //METHOD 2
    int mid=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==mid || j==mid){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}