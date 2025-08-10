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
void printrec2(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    printrec2(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    printrec2(st);
    cout<<endl;
    pushAtBottom(st,100);
    printrec2(st);

    
}