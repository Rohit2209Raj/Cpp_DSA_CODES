#include<iostream>
using namespace std;
void function(int x=7,float y=2){
   cout<<x<<endl<<y;
}
int main(){
    int x=5;
    int y=4;
   // cout<<"Address of main x: "<<&x<<endl<<"Address of main y: "<<&y<<endl;
    function(5.674);  
}