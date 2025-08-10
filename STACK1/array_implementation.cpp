#include<iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"Stack is full";
            return ;
        }
        arr[++idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty";
            return;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){

    }


};
int main(){
    stack st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top();

}