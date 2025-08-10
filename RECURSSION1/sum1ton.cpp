#include<iostream>
using namespace std;
// int sum(int n,int sumf){
//     if(n==1) return n; // base case
//     sumf+=n;  // kaam
//     return n+sum(n-1,sumf); //call
// }
int sum(int n){
    if(n==1) return n; // base case
    return n+sum(n-1); // call
    // fsum+=n; // kaam
}

int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    cout<<sum(n);
}