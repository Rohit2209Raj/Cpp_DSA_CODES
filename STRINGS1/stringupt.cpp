#include<iostream>
#include<string>
using namespace std;
int main(){
    string name="rohit raj";
    // name[0]='m';
    // cout<<name;
    for(int i=0;name[i]!='\0';i++){
        if(i%2==0) name[i]='z';
    }
    cout<<name;
}