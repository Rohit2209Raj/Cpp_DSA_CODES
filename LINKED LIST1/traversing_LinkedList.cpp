#include<iostream>
using namespace std;
class Node{ // Linked List node
    public:
    int val;
    Node* next;
    Node(int v=0){
        val=v;
        next=NULL;
    }
};
int main(){
    // Node a(25),b(96),c(78),d(42);
    // a.next=&b;
    // b.next=&c;
    // c.next=&d;
    // // BAD WAY
    // //cout<<(a.next)->next->next->val;
    // //Node temp=a;
    // // while(1){
    // //     cout<<temp.val<<" ";
    // //     if(temp.next==NULL) break;
    // //     temp=*(temp.next);
    // // }

    // BETTER METHOD ///
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
   // cout<<a<<endl<<b;
    a->next=b;
    b->next=c;
    c->next=d;
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    






}