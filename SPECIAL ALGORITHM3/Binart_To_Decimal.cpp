#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void decimal(int n){
   vector<int>v;
   while(n>0){
    if(n%10!=0 && n%10!=1) return;
    v.push_back(n%10);
    n=n/10;
   }
   int x=0;
   int sum=0;
   for(int i=0;i<v.size();i++){
       sum+=v[i]*pow(2,x);
       x++;   
   }
   cout<<sum;
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    decimal(n);
}