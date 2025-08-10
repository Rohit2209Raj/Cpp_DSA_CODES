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
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }


}