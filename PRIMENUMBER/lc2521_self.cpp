#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
           if(n%i==0) return false;
    }
    return true;
}
int main(){
    int nums[]={2,4,3,10,6};
    int size=sizeof(nums)/sizeof(nums[0]);
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>max) max=nums[i];
    }
    vector<int>maxprime;
    for(int i=2;i<max;i++){
        if(isprime(i)) maxprime.push_back(i);
    }
    //for(int i=0;i<maxprime.size();i++) cout<<maxprime[i]<<" ";
    vector<int>sol(maxprime.size(),0);
    for(int i=0;i<size;i++){
        for(int j=0;j<sol.size();j++){
            if(nums[i]%maxprime[j]==0) {
                sol[j]=1;
            }
        }
    }
    for(int i=0;i<sol.size();i++){
        if(sol[i]==1) cout<<maxprime[i]<<" ";
    }
}