#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        next=NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }

    void push(int x){
        Node* temp=new Node(x);
         if(size==0) {
            head=tail=temp;
         }
         else {
            tail->next=temp;
            tail=temp;
         }
         size++;
    }

    void pop(){
        if(size<0) cout<<"Empty size...";
        else{
            head=head->next;
            size--;
        }
    }

    int front(){
        if(size==0){
            cout<<"Empty Queue"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(size==0){
            cout<<"Empty Queue"<<endl;
            return -1;
        }
        return tail->val;
    }

    int length(){
        return size;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();

}