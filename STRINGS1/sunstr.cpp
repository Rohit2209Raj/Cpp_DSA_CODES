#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int n=name.length();
    cout<<name.substr(1,n/2); //(idx,length)


}
