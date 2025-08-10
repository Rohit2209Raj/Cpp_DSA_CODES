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
void printrec(stack<int>&st){
    if(st.size()==1){
        cout<<st.top()<<endl;
        return;
    }
    int x=st.top();
    st.pop();
    printrec(st);
    st.push(x);
    cout<<x<<endl;
}
void revst(stack<int>&st){
    cout<<"Entering stack with size: "<<st.size()<<endl;
    if(st.size()==1){
        return;
    }
    int x=st.top();
    cout<<"Popping out: "<<st.top()<<endl;
    st.pop();
    revst(st);
    cout<<"Returning and pushing: "<<x<<endl;
    pushAtBottom(st,x);
    printrec(st);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    printrec(st);
    revst(st);
    cout<<endl;
    printrec(st);
}