#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(5);
    st.push(4);
    st.push(5);
    st.push(4);
    cout<<st.size()<<endl;
    st.pop();
    cout<<"size: "<<st.size()<<endl;
    cout<<st.top();

}