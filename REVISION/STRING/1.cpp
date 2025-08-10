#include<iostream>
using namespace std;
int main(){
    string s="rohit";
    cout<<s.substr(0,2);
    cout<<endl;
    int x=100;
    string z=to_string(x);
    cout<<z+"abc"<<endl;
    int y=123456700;
    string y1=to_string(y);
    int i=0,size=0;
    while(y1[i]!='\0'){
        size++;
        i++;
    }
    cout<<"Size= "<<size;
    
}