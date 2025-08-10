#include<iostream>
using namespace std;
int power2(int n){
    int count=0;
    int temp=0;
    while(n>0){
     count++;
     temp=n;
     n=((n)&(n-1));
    }
    return temp*2;
 }
// int power2(int n){
//    int count=0;
//    int temp=0;
//    while(n>0){
//     count++;
//     temp=n;
//     n=((n)&(n-1));
//    }
//    return temp;
// }
int main(){
    //cout<<((20)&(21));
    // cout<<power2(56);
    // for just grater than number;
    //cout<<power2(129);
    


}