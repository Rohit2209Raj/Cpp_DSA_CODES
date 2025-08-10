#include<iostream>
using namespace std;
int main(){
    //Solid rectangle
    int n,m;
    cout<<"enter your number of rows:";
    cin>>n;
     cout<<"enter your number of coloumn:";
    cin>>m;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
        cout<<"*";
       }
       cout<<endl;
    }



    
}