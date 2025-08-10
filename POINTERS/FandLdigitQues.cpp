#include<iostream>
using namespace std;
void FandL(int* n){
    cout<<"Last digit of number is "<<(*n)%10<<endl;
    while((*n)>10){
        *n=(*n)/10;
    }
    cout<<"First digit of number is "<<*n;
    
}
int main(){
    int a;
    cout<<"enter your number : ";
    cin>>a;
    FandL(&a);
    
   
}