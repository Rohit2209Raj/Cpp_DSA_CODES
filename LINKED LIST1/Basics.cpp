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
//  Node a;
//  a.val=10;
//  Node b;
//  b.val=10;
//  Node c;
//  c.val=10;
//  Node d;
//  d.val=10;
Node a(25),b(96),c(78),d(42);
//cout<<a.val<<endl<<a.next<<endl;
// forming linkelist;
 a.next=&b;
 b.next=&c;
 c.next=&d;
 //cout<<(a.next)->val;
//cout<<(*a.next).val;
cout<<(a.next)->next->next->val;
//cout<<(*(*(*a.next).next).next).val;

}