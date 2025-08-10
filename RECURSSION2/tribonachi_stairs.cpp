#include<iostream>
using namespace std;
int tri_stairs(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    else return tri_stairs(n-1) +tri_stairs(n-2) + tri_stairs(n-3);
}
int main(){
    int n;
    cout<<"enter number of stairs: ";
    cin>>n;
    cout<<tri_stairs(n);
}