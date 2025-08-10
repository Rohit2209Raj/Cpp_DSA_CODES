#include<iostream>
using namespace std;
void Hello(){
    cout<<"Hello Rohit"<<endl<<"Have a Nice Day Ahead";
}


void Pattern(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++) {
            cout<<"*";
            }
        cout<<endl;
    }
}
int main(){
    //Hello(); // function calling
    Pattern(4);
   // Hello();
    Pattern(3);
    
    }