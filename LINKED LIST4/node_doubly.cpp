#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val=0){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void display(Node* head) { 
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void recdisplay(Node* head){  // to display in reverse order
    if(head==NULL) return ;
    recdisplay(head->next);
    cout<<head->val<<" ";
}



int main(){
    // Node a(1);
    // Node b(2);
    // Node c(3);
    // Node d(4);
    // Node e(5);
    // Node f(6);
    // a.next=&b;
    // b.prev=&a;
    // b.next=&c;
    // c.prev=&b;
    // c.next=&d;
    // d.prev=&c;
    // d.next=&e;
    // e.prev=&d;
    // e.next=&f;
    // f.prev=&e;
    // f.next=NULL;
    // a.display(a);

    // pointer method

    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    d->next=NULL;
    recdisplay(a);
}