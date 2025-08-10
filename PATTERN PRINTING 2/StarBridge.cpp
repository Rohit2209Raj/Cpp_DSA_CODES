#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int m=n-1;
    for(int z=1;z<=(2*n)-1;z++){
            cout<<"*";
        }
          cout<<endl;
    for(int i=1;i<=m;i++){
        
      
       
        for(int j=m-i+1;j>=1;j--){
            cout<<"*";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<" ";
        }
        for(int l=m-i+1;l>=1;l--){
            cout<<"*";
        }

        cout<<endl;
    }

   
}