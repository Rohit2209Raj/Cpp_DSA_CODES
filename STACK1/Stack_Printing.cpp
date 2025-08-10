#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>temp;
    // while(st.size()){
    //     cout<<st.top()<<endl;
    //     int x=st.top();
    //     temp.push(x);
    //     st.pop();
    // }
    // while(temp.size()){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // while(st.size()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // print stack in same order

    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        temp.pop();
    }






}   

