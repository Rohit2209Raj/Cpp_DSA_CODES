#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if(b%a==0) return a;
    else return gcd(a,b%a);
}
int main(){
    int a=24;
    int b=60;
    cout<<gcd(24,60);
}
// isko sahi kar lena
