#include<iostream>
using namespace std;
int main(){
    // star triangle
    int n;
    cout<<"enter your number of rows:";
    cin>>n;
     
    for(int i=1;i<=n;i++){
       for(int j=i;j<=n;j++){
        cout<<"*"<<" ";
       }
    //    cout<<i;
       cout<<endl;
    }



    
}