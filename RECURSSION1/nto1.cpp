#include<iostream>
using namespace std;
void printu(int n){
   if(n==0) return; // base case
    cout<<n<<endl; // kaam
    printu(n-1); // call
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    printu(n);
}