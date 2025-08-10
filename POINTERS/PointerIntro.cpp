#include<iostream>
using namespace std;
int main(){
     int x=5;
     char y='rohit';
     int* p=&x;
     char* p1=&y;
     //char* p=&x;
    // int y=&x;
     cout<<p<<endl<<p1<<endl;
     cout<<&x<<endl<<&y;
}