#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
    
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    swap(a,b);
    // int temp=a;
    // a=b;
    // b=temp;
    cout<<a<<endl<<b;
}