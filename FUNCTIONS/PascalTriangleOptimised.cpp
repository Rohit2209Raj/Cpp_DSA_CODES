#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int i=0;i<=n;i++){
    int curr=1;
    for(int j=0;j<=i;j++){
        cout<<curr<<" ";
        curr=curr*(i-j)/(j+i);
    }
    cout<<endl;
   }
}

// pata nahi kyu na chal raha
