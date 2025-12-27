// FIBONACHI SERIES
// 0 1 1 2 3 5 8 13 21 34
// 0 1 2 3 4 5 6 7   8  9
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the fibo element to find: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    // dp[0]=0;
    // dp[1]=1;
    // for(int i=2;i<=n;i++){
    //     dp[i]=dp[i-1]+dp[i-2];
    // }
    int prev=0;
    int curr=1;
    int k=2;
    while(k<=n){
        int x=curr;
        curr=curr+prev;
        prev=x;
        k++;
    }
    cout<<curr;
}