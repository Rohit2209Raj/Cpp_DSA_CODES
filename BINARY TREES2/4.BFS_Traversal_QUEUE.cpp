#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* right;
    node* left;

    node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void levelOrderQueue(node* root){   // BFS
    queue<node*>q;
    q.push(root);
    while(q.size()){
    node* temp=q.front();
    cout<<temp->val<<" ";
    q.pop();
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
}
}
void levelOrderQueueRev(node* root){
    queue<node*>q;
    q.push(root);
    while(q.size()){
    node* temp=q.front();
    cout<<temp->val<<" ";
    q.pop();
    if(temp->right) q.push(temp->right);
    if(temp->left) q.push(temp->left);
}
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
    node* g=new node(7);


    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    levelOrderQueue(a);
    cout<<endl;
    levelOrderQueueRev(a);
}