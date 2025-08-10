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
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void printNthLevel(node* root,int level,int target){
    if(root==NULL) return;
    if(level==target){
        cout<<root->val<<" ";
        return;
    }
    printNthLevel(root->left,level+1,target);
    printNthLevel(root->right,level+1,target);
};
void printNthLevelRev(node* root,int level,int target){
    if(root==NULL) return;
    if(level==target){
        cout<<root->val<<" ";
        return;
    }
    printNthLevelRev(root->right,level+1,target);
    printNthLevelRev(root->left,level+1,target);
};
int level(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(level(root->left),level(root->right));
}
void levelOrder(node* root){
    int treeLevel=level(root);
    for(int i=1;i<=treeLevel;i++){
        printNthLevel(root,1,i);
        cout<<endl;
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
    preOrderTraversal(a);
    cout<<endl;
    printNthLevel(a,1,3);
    cout<<endl;
    levelOrder(a);
}