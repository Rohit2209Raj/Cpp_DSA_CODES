#include<iostream>
#include<stack>
using namespace std;
int result(int v1,char ch,int v2){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else return v1/v2;
}
int main(){
    string s;
    cout<<"Enter prefix equation: ";
    getline(cin,s);
    stack<int>val;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57) val.push((s[i]-48));
        else{
            char ch=s[i];
            int v1=val.top();
            val.pop();
            int v2=val.top();
            val.pop();
            val.push(result(v1,ch,v2));
        }
    }
    cout<<val.top();
}