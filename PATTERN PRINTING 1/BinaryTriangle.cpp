#include<iostream>
using namespace std;
int main(){
    // star triangle
    int n;
    cout<<"enter your number of rows:";
    cin>>n;
     bool flag=true;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        
        if(flag==true){
            cout<<1<<" ";
            flag=false;
        }
        else{
            cout<<0<<" ";
            flag=true;
        }
       }
    //    cout<<i;
       //cout<<endl;
       //cout<<flag;
       cout<<endl;
    }



    
}


// YOU DID IT BHAI AAJ TO TU KAMAL KAR RAHA HAI//