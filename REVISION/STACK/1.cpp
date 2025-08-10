// RECCURSIVELY PUSH AT BOTTOM
#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>&st,int val){
    cout<<"Calling with stack size: "<<st.size()<<endl;
    if(st.size()==0){
        cout<<"Base case Pushing: "<<val<<endl;
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st,val);
    cout<<"Returning and pushing back: "<<x<<endl;
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    pushAtBottom(st,100);
    while(st.size()){
        cout<<st.top()<<endl;
        st.pop();
    }
}