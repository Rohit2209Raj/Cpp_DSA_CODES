#include<iostream>
#include<stack>
using namespace std;
void printrec(stack<int>st){
    if(st.size()==0) return; 
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    printrec(st);
    st.push(x);
}
void printrec2(stack<int>st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    printrec2(st);
    st.push(x);
    cout<<st.top()<<" ";
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int n=st.size();
    printrec2(st);
}