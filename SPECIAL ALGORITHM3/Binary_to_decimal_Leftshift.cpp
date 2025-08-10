#include<iostream>
using namespace std;
void decimal(string &s){
    int n=s.size();
    int sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=(s[i]-'0')*(1<<(n-i-1));
    }
    cout<<sum;
}
int main(){
    string s;
    cout<<"Enter your binary number: ";
    getline(cin,s);
    decimal(s);
    
    
}