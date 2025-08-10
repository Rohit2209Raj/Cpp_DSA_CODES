#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
     cout<<arr<<endl; // same
    cout<<&arr<<endl;  //same
    cout<<&arr[0]<<endl; //same
    cout<<&arr[1]-arr<<endl;
    cout<<&arr[2]<<endl;

   // MAHA IMPORTANT/////
    cout<<&arr[2]-arr<<endl;
    // ARITHEMATICX DIFFERENCE =diff/sizeof datatype

}