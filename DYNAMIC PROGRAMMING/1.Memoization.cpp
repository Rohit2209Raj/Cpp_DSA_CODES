// FIBONACHI SERIES
// 0 1 1 2 3 5 8 13 21 34
// 0 1 2 3 4 5 6 7   8  9
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n,vector<int>&v){
    if(n<=1) return n;
    if(v[n]!=-1) return v[n];
    else return v[n]=fibo(n-1,v)+fibo(n-2,v);
}
int main(){
    int n;
    cout<<"Enter the fibo element to find: ";
    cin>>n;
    vector<int>v(n+1,-1);
    cout<< fibo(n,v);
}