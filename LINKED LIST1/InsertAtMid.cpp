#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int x){
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

    void insertAtBegin(int x){
        Node* temp=new Node(x);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;

    }

    void insertAtMid(int idx,int x){
        if(idx==0) insertAtBegin(x);
        else if(idx==size) insertAtEnd(x);
        else if(idx<0 || idx>size) {
            cout<<"Invalid index...";
            return;
        }
        else{
            Node* t=new Node(x);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }

    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid index...";
            EXIT_FAILURE;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{Node* temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}
};
int main(){
    LinkedList ll;
    ll.insertAtBegin(55);
    ll.display();
    ll.insertAtEnd(500);
    ll.display();
    ll.insertAtBegin(55);
    ll.display();
    ll.insertAtEnd(0);
    ll.display();
    ll.insertAtMid(1,100);
    ll.display();
    ll.insertAtMid(2,456);
    ll.display();
    cout<<ll.getAtIdx(-2);


}