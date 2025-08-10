#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtidx(stack<int>st,int idx,int val){
    for(int i=0;i<idx;i++){
        

    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtidx(st,2,99);
    print(st);
    cout<<endl;
    pushAtidx(st,0,-1);
    print(st);
    cout<<endl;
    pushAtidx(st,5,78);
    print(st);
}