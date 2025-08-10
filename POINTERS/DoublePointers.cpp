#include<iostream>
using namespace std;


int main(){
    int x=5;
    int* p=&x;
    int** p2=&p;
    cout<<*p2<<endl<<**p2;
    
   
}