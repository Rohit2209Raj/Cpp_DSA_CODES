#include<iostream>
#include<vector>
#include<string>
using namespace std;
void binary(string &s){
    int n=s.size();
    vector<int>v;
    int i=stoi(s);
    while(i!=0){
        v.push_back(i%2);
        //i=i/2;
        i=i>>1;
    }
    for(int i=v.size()-1;i>=0;i--) cout<<v[i];
}
int main(){
    string s;
    cout<<"Enter your decimal number: ";
    getline(cin,s);
    binary(s);
}
/*
x>>1 = x/2;
x>>2 = x/pow(2,2);
x>>3 = x/pow(2,3);

x<<1 = x*2;
x<<2 = x*pow(2,2);
*/