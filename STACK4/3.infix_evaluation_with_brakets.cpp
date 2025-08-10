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
        if(s[i] >=48 && s[i]<=57){ // c++ if char compared to int ,it autmomatically compares ASCII values
            val.push(s[i]-48);
        }
        else{
            if(opt.size()==0) opt.push(s[i]); // this might cause an error as we cannot determine PRIORITY OF '(' AND ')'
            else if(s[i]=='(') opt.push(s[i]);                        // HENCE MAKE SEPARATE CONDITIONS
            else if(opt.top()=='(') opt.push(s[i]);
            else if(s[i]==')'){
                while(opt.top()!='('){
                    work(val,opt);
                }
                opt.pop();
            }
            else if( P(s[i])>P(opt.top())) opt.push(s[i]);
            else{
                while(opt.size()>0 &&P(opt.top())>=P(s[i])){
                    work(val,opt);
                }
                opt.push(s[i]);
            }
        }
    }
    while(opt.size()!=0){
        work(val,opt);
    }
    cout<<val.top()<<endl;
    cout<<(2+6)*4/8-3;
}