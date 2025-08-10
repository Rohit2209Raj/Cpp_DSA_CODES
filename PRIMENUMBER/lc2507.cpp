#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isprime(int x){
if(x<=1) return false;
if(x==2) return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
int smallestValue(int n) {
    if(isprime(n)==1) return n;
    vector<int>v1;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) {
            //cout<<endl<<"UPPER "<<i<<endl;
            if(isprime(i)==1) v1.push_back(i);
        }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0) {
            //cout<<endl<<"LOWER "<<i<<endl;
            if(isprime(i)==1) v1.push_back(n/i);
        }
    }
   // cout<<endl<<"SIZE: "<<v1.size()<<endl;                                                                                            
    //for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    int sum=0;
    for(int i=0;i<v1.size();i++) sum+=v1[i];
    return smallestValue(sum);
}
int main(){
 int x;
 cout<<"Enter your number: ";
 cin>>x;
 cout<<smallestValue(x);
}