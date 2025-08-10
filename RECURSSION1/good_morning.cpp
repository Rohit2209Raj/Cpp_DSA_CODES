#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return ;
    cout<<"good morning"<<endl;
     greet(n-1);
}
int main(){
    int n;
    cout<<"ENTER YOUR NUMBER: ";
    cin>>n;
    greet(n);
}