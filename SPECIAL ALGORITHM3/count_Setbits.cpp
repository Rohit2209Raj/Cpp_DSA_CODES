#include<iostream>
using namespace std;
void count1(int n){
    cout<<__builtin_popcount(n); // return number of 1 in binary digit
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    count1(n);
}