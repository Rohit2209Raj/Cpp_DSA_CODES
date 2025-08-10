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
class DLL{
    public:
    node*head;
    node* tail;
    int size;


    DLL(){
        head=NULL;
        size=0;
    }
    void insertAtHead(int x){
        node* temp=new node(x);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp; // change
            head=temp;
        }
        size++;
    }

    void insertAtTail(int x){
        node* temp=new node(x);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail; // change
            tail=temp;
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
            t->next->prev=temp;
            temp->next=t->next;
            t->next=temp;     // many changes
            temp->prev=t;
        }
    }

    void deleteAtHead(){
        if(size<=0) cout<<"empty linkedlist";
        else{
           head=head->next;
           if(head!=NULL) head->prev=NULL; // change
           if(head==NULL) tail=NULL; //change
           size--;
        }
    }

    void deleteAtTail(){
        node*temp=tail->prev;
        if(size==1) head=tail=NULL;
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteAtMid(int idx){
        if(size==0) return;
        else if(idx<0 || idx>=size) cout<<"Invalid idx";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            node*temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
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
        if(idx<0 || idx>=size) return -1 ;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
        node*temp=head;
        if(idx<size/2){
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    else{
        node* temp=tail;
        for(int i=0;i<size-idx-1;i++){
            temp=temp->prev;
        }
        return temp->val;
    }
    }
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
    DLL dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtTail(3);
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtTail(3);
    dl.insertAtMid(3,99);
    dl.display();
    dl.deleteAtHead();
    dl.display();
    dl.deleteAtTail();
    dl.display();
    dl.deleteAtMid(2);
    dl.display();
    // cout<<dl.getidx(0);
    // cout<<endl;
    // cout<<dl.getidx(1);
    // cout<<endl;
    // cout<<dl.getidx(2);
    // cout<<endl;
    cout<<dl.getidx(3);
    cout<<endl;

}