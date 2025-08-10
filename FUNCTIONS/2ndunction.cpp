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
       int n,r;
       cout<< fact(4)<<endl;
       cout<< fact(5)<<endl;
       cout<<combination(5,2);


}
