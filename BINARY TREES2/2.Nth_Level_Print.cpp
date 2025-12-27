
// Dono call se pehle work is called preorder
//Root Left Right
#include<iostream>
#include<climits>
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


void preOrderTraversal(node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(node* root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    cout<<root->val<<" ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->val<<" ";
}


void printNthLevel(node* root,int level){
    if(root == NULL) return;
    if(level==0) cout<<root->val<<" ";
    printNthLevel(root->left,level-1);
    printNthLevel(root->right,level-1);
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
    preOrderTraversal(a);
    cout<<endl;
    inOrderTraversal(a);
    cout<<endl;
    postOrderTraversal(a);
    cout<<endl;
    printNthLevel(a,1);
}