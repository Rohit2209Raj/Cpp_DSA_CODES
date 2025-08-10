#include<iostream>
using namespace std;
class Node{  // user defined datatype 
    public:
    int val;
    Node* next;
    Node(int val=0){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{ // user defined data->structure
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
      tail=head=NULL;
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
    /*
    void inserAtEnd(Node* head,int val){ // when head is given but tail didnt;
      Node* temp=a;
      while(temp->next!=NULL){
         temp=temp->next;
      }
         Node*t=new Node(val) last node we want to attach
         temp->next=t;
     }
    */
   void insertAtBegin(int x){
        Node* temp=new Node(x);
        if(size==0){
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
   }

//    void insertIdx(int x,int idx){
//     if(idx>=size) return;
//     Node* t=new Node(x);
//     Node* temp=head;
//     int count=0;
//     while(count<idx){
//         //if(count==idx) break;
//         count++;
//         temp=temp->next;
//     }
//     t->next=temp;
//     size++;

//    }
void insertIdx(int x,int idx){
    if(idx==0) insertAtBegin(x);
    else if(idx==size) insertAtEnd(x);
    else if(idx>size|| idx<0) return;
    else{
        Node* t=new Node(x);
        Node* temp=head;
        int count=0;
        Node* idxz=NULL;
        while(count<=idx){
           if(count==idx-1) idxz=temp;
           if(count==idx) break;
           temp=temp->next; 
           count++;
        }
        idxz->next=t;
         t->next=temp;
        // temp->next=t;
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

};
int main(){
    LinkedList ll;
    ll.insertAtEnd(55);
    ll.display();
    ll.insertAtEnd(54);
    ll.display();
    ll.insertAtBegin(85);
    ll.display();
    ll.insertAtEnd(55);
    ll.display();
    ll.insertAtEnd(54);
    ll.display();
    ll.insertAtBegin(85);
    ll.display();
    ll.insertIdx(100,2);
    ll.display();
}