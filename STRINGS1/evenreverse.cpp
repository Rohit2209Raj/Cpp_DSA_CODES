#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int n=name.length();
    cout<<name<<endl;
    reverse(name.begin(),name.begin()+(n/2));
    cout<<name<<endl;



}
