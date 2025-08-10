#include<iostream>
#include<stack>
using namespace std;
int P(char c){
    if(c=='+' || c=='-') return 1;
    else return 2;
}
void work(stack<string>&val,stack<char>&opt){
        char ch=opt.top();
        opt.pop();
        string v2=val.top();
        val.pop();
        string v1=val.top();
        val.pop();
        val.push(v1+v2+ch);
}
int main(){
    string s;
    cout<<"Enter your infix mathematic expression: ";
    getline(cin,s);
    stack<string>val;
    stack<char>opt;
    for(int i=0;i<s.size();i++){
        string z(1,s[i]);  // char to string conversion
        if(s[i]>=48 && s[i]<=57) val.push(z);
        else{
        if(opt.size()==0) opt.push(s[i]);
        else if(P(s[i])>P(opt.top())) opt.push(s[i]);
        else{
            while(opt.size()!=0 && P(s[i])<=P(opt.top())) work(val,opt);
            opt.push(s[i]);
        }
    }
}
    while(opt.size()!=0){
        work(val,opt);
    }
    cout<<val.top()<<endl;
}