#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Lines : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
             cout<<" ";
        }
       for(int k=1;k<=i;k++){
        cout<<k;
         }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
         
        cout<<endl;

    }
}


// GAJAB KAR DIYA ROHIT TUNE TO YAAR KAHI JYADA SAMAJDAAR HO GAY TO HARVARD NA JANA PAD JAAYE//
