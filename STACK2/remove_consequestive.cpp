#include<iostream>
#include<stack>
using namespace std;
void display(stack<char>st){
    if(st.size()==0) return;
    char ch=st.top();
    st.pop();
    display(st);
    st.push(ch);
    cout<<st.top()<<" ";
}
int main(){
    string s="aaabbcddaabffg";
    stack<char>st;
    int i=0;
    while(s[i]!='\0'){
        if(st.size()==0){
            st.push(s[i]);
        }
        else if(st.top()==s[i]){
            i++;
            continue;
        }
        else{
            st.push(s[i]);
        }
        i++;
    }
    display(st);
}