#include<iostream>
using namespace std;
int pow(int n,int a){
    if(a==1) return n;
    else return n*pow(n,a-1);
}

int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    int a;
    cout<<"enter power: ";
    cin>>a;
    cout<<pow(n,a);
}