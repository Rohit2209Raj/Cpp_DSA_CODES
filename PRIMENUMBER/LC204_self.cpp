#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    vector<bool>check(n+1,1);
    check[0]=0;
    check[1]=0;
    for(int i=2;i<sqrt(n);i++){
        if(isprime(i)){
            for(int j=2*i;j<n+1;j+=i){
                if(check[j]==0) continue;
                else check[j]=0;
            }
        }
    }
    int count=0;
    for(int i=0;i<n+1;i++){
        if(check[i]==1) {
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<"result is : "<<count;
}
