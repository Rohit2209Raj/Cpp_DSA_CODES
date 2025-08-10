#include<iostream>
#include<stack>
using namespace std;
void printrec(stack<int>&st){
    cout<<"Calling stack with size: "<<st.size()<<endl;
    if(st.size()==1){
        cout<<"Entered into the base case: "<<st.top()<<endl;
        return;
    }
    int x=st.top();
    st.pop();
    printrec(st);
    cout<<"Returning from base case with size: "<<st.size()<<" and adding "<<x<<endl;
    st.push(x);
    cout<<st.top()<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    printrec(st);
}