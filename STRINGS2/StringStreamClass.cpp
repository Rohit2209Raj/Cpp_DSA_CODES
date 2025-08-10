#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="rohit is from city sonpur";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}