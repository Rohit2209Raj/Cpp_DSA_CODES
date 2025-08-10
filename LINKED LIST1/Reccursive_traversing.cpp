#include<iostream>
using namespace std;
class Node{ 
    public:
    int val;
    Node* next;
    Node(int v=0){
        val=v;
        next=NULL;
    }
};
void display(Node* temp){ // naya dabba with a ka address;
    if(temp==NULL) return;
    cout<<temp->val<<" ";
    display(temp->next);

}
void revdisplay(Node* temp){
    if(temp==NULL) return;
    revdisplay(temp->next);
    cout<<temp->val<<" ";
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    cout<<endl;
    revdisplay(a);


    






}