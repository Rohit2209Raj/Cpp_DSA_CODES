#include<iostream>
#include<stack>
using namespace std;
int P(char s){
    if(s=='*' || s=='/') return 2;
    else return 1; 
}
int res(int v1,char ch,int v2){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else return v1/v2;
}
void work(stack<int>&val,stack<char>&opt){
        char ch=opt.top();
        opt.pop();
        int v2=val.top();
        val.pop();
        //if(val.size()==0) val.push(s[i+1]);
        int v1=val.top();
        val.pop();
        val.push(res(v1,ch,v2));
}
int main(){
    string s;
    cout<<"Enter your mathematical expression: ";
    getline(cin,s);
    stack<int>val;
    stack<char>opt;
    for(int i=0;i<s.size();i++){
        if(int(s[i]) >=48 && int(s[i])<=57){
            val.push(int(s[i])-48);
        }
        else{
            if(opt.size()==0) opt.push(s[i]);
            else if(P(s[i])>P(opt.top())) opt.push(s[i]);
            else{
                while(opt.size()>0 && P(opt.top())>=P(s[i])){
                    work(val,opt);
                }
                opt.push(s[i]);
            }
        }
    }
    while(opt.size()!=0){
        work(val,opt);
    }
    cout<<val.top();
}