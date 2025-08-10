#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int combination(int n,int r){
    int combination=fact(n)/(fact(r)*fact(n-r));
    return combination;
}
int main(){
      int n;
      cout<<"Enter the number of Lines: ";
      cin>>n;
      for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++) {
            //(combination(i,j)==0) cout<<" ";
             cout<<combination(i,j)<<" ";
        
      }
      cout<<endl;

}
}
