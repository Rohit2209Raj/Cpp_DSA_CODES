#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
    public:
    node*head;
    int size;
    LinkedList(){
        head=NULL;
        size=0;
    }
    void insertAtHead(int x){
        node* temp=new node(x);
        if(size==0) head=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtTail(int x){
        node* temp=new node(x);
        node* t=head;
        if(size==0) head=temp;
        else{
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp;
        }
    size++;
    }

    void insertAtMid(int idx,int x){
        if(idx==0) insertAtHead(x);
        else if(idx==size) insertAtTail(x);
        else if(idx<0 || idx>size) cout<<"Invalid index....";
        else{
            node* temp=new node(x);
            node* t=head;
            for(int i=0;i<idx-1;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }
    }

    void deleteAtHead(){
        if(size<=0) cout<<"empty linkedlist";
        else{
            head=head->next;
            size--;
        }
    }

    void deleteAtTail(){
        node*temp=head;
        if(size==1) head=NULL;
        for(int i=0;i<size-2;i++){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
    }

    void deleteAtMid(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid idx";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            node*temp=head;
            for(int i=0;i<idx-2;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void deleteVal(int x){
        if(head->val==x){
            head=head->next;
            size--;
        }
        else{
        node* temp=head;
        while((temp->next)->val!=x){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}
    int getidx(int idx){
        node*temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->next->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtHead(55);
    ll.display();
    ll.insertAtTail(999);
    ll.display();
    ll.insertAtHead(2);
    ll.display();
    ll.insertAtTail(1);
    ll.display();
    ll.insertAtMid(1,100);
    ll.display();


}

