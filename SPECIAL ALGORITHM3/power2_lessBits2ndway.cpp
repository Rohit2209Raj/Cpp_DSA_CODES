#include<iostream>
using namespace std;
int power2(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>3);
    return (n+1)/2;
}
int main(){
    int n;
    n=33;
    cout<<power2(n);
}