#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="((())(";
    if(s.size()%2!=0){
        cout<<false;
        return -1;
    }
    stack<char>st;
    int i=0;
    while(i<s.size()){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.top()=='('){
                st.pop();
            }
            else cout<< false;
        }
        i++;
    }
    if(st.size()==0) cout<< true;
    else cout<< false;

}