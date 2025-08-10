#include<iostream>
//#include<cmath>
#include<math.h>
using namespace std;
void power2(int n){
    if(n<=1){
        cout<<1;
        return;
    }
    int count=0;
    while(n>1){
        count++;
        n=n/2;
    }
    cout<<pow(2,count);
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    power2(n);
}