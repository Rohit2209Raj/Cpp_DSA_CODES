// FIBONACHI SERIES
// 0 1 1 2 3 5 8 13 21 34
// 0 1 2 3 4 5 6 7   8  9
#include<iostream>
#include<vector>
using namespace std;
int fibo(vector<int>&dp, int n){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    else return fibo(dp,n-1)+fibo(dp,n-2);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fibo(dp,n);

}