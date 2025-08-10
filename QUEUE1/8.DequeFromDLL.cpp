#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int val=0){
        this->val=val;
        next=prev=NULL;
    }
};
class Deque{
    public:
    node*head;
    node* tail;
    int size;


    Deque(){
        head=NULL;
        size=0;
    }
    void push_front(int x){
        node* temp=new node(x);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp; // change
            head=temp;
        }
        size++;
    }

    void push_back(int x){
        node* temp=new node(x);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail; // change
            tail=temp;
    }
    size++;
    }

    void pop_front(){
        if(size<=0) cout<<"empty linkedlist";
        else{
           head=head->next;
           if(head!=NULL) head->prev=NULL; // change
           if(head==NULL) tail=NULL; //change
           size--;
        }
    }

    void pop_back(){
        node*temp=tail->prev;
        if(size==1) head=tail=NULL;
        temp->next=NULL;
        tail=temp;
        size--;
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
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    Deque q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);
    q.display();
    q.pop_front();
    q.display();
}