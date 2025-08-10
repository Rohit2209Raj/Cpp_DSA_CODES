#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int m=n-1;
    for(int z=1;z<=(2*n)-1;z++){
            cout<<z;
        }
          cout<<endl;
    for(int i=1;i<=m;i++){
        
      
       
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<" ";
        }
        for(int l=i+4;l<=(2*n)-1;l++){
            cout<<l;
        }

        cout<<endl;
    }

   
}

// badi muskil se hit and trial se solve hua hai!!!!!!!!!!!!! no appreciation.