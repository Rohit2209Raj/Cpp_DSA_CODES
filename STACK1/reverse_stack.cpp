#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverseStack(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}
void printrec2(stack<int>&st){
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
    printrec2(st);
    reverseStack(st);
    cout<<endl;
    printrec2(st);
}