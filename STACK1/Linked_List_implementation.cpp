#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int val;
    node(int val){
        this->val=val;
        this->next=next;
    }
};
class stack{
    public:
    node* head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }

    void push(int val){
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        size++;
    }

    void pop(){
        if(head==NULL){
            cout<<"Stack is empty";
            return;
        }
        head=head->next;
        size--;
    }

    int top(){
        if(head==NULL){
            cout<<"Stack is empty";
            return -1;
        }
        return head->val;
    }
    void display(){
        node* temp=head;
        displayrec(temp);
        cout<<endl;
    }

    void displayrec(node* temp){
        if(temp==NULL) return;
        displayrec(temp->next);
        cout<<temp->val<<" ";
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size<<endl;
    st.pop();
    st.display();
}