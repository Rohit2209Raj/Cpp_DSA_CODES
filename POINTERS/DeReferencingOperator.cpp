#include<iostream>
using namespace std;
int main(){
    //  int x=5;
    //  int* p=&x;
    //  cout<<p<<endl<<*p<<endl;
    //  *p=10;
    //  cout<<p<<endl<<*p;

    int a,b;
    int* p1=&a;
    int* p2=&b;
    cout<<"Enter 1st Number: ";
    cin>>*p1;
    cout<<"Enter 2nd Number: ";
    cin>>*p2;
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    
    char* p3=&ch;
    cout<<*p1+*p2<<" "<<*p3;
    


}
     