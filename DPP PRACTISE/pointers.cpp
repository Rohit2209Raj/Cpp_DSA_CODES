#include<iostream>
using namespace std;
// Q1
// int prod(int* a,int* b){
//     return (*a)*(*b);
    
// }
// int main(){
//     int a,b;
//     cout<<"Enter the two numbers: ";
//     cin>>a>>b;
//     int* p1=&a;
//     int* p2=&b;
//     cout<<prod(p1,p2);
// }

// Q5
// is the following code snipet correct???
// int a = 10, b = 20;
// int *ptr;
// *ptr = 5;
// Solution : 
// The program is correct and will compile but might result in runtime error.This is 
// because ptr will have a garbage address which might even point to a location which 
// does not belong to our program and hence might result in Segmentation Fault when we 
// are trying to access it

