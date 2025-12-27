// #include<iostream>
// #include<climits>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* right;
//     node* left;

//     node(int val){
//         this->val=val;
//         right=NULL;
//         left=NULL;
//     }
// };

// void display(node* root){
//     if(root==NULL) return;
//     cout<<root->val<<endl;
//     display(root->left);
//     display(root->right);
// }
// int sum(node* root){
//     if(root==NULL) return 0;
//     return root->val+sum(root->left)+sum(root->right);
// }

// int size(node* root){
//     if(root==NULL) return 0;
//     return 1+size(root->left)+size(root->right);
// }

// int maxn(node* root){
//     if(root==NULL) return INT_MIN;
//     return max(root->val,max(maxn(root->left),maxn(root->right)));

// }

// int height(node* root){
//     if(root==NULL) return 0;
//     return 1+max(height(root->right),height(root->left));
// }

// int main(){
//     node* a=new node(1);
//     node* b=new node(2);
//     node* c=new node(3);
//     node* d=new node(4);
//     node* e=new node(5);
//     node* f=new node(6);
//     node* g=new node(7);

//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;
//     display(a);
//     cout<<sum(a);
//     cout<<endl<<size(a);
//     cout<<endl<<maxn(a);
//     cout<<endl<<height(a);
// }



#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int treeSum(node* root){
    if(root==NULL) return 0;
    return root->val+treeSum(root->left)+treeSum(root->right);
}
int treeSize(node* root){
    if(root==NULL) return 0;
    return 1+treeSize(root->left)+treeSize(root->right);
}
int treeMax(node* root){
    if(root==NULL) return -1e9;
    return max(root->val,max(treeMax(root->left),treeMax(root->right)));
}
int level(node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    node* f=new node(60);
    node* g=new node(70);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    display(a);
    cout<<'\n'<<treeSum(a);
    cout<<'\n'<<treeSize(a);
    cout<<'\n'<<treeMax(a);
    cout<<'\n'<<level(a);
}





