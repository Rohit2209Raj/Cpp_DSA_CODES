#include<iostream>
using namespace std;
void flip(int n){
    int s=n;
    s=s|(s>>1);
    s=s|(s>>2);
    s=s|(s>>3);
    n=n^s;
    cout<<n;
}
int main(){
    int n;
    cout<<"Enter your  number: ";
    cin>>n;
    flip(n);
}