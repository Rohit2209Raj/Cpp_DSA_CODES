
// // Dono call se pehle work is called preorder
// //Root Left Right
// #include<iostream>
// #include<climits>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* right;
//     node* left;

//     node(int val){
//         this->val=val;
//         this->right=NULL;
//         this->left=NULL;
//     }
// };


// void preOrderTraversal(node* root){
//     if(root == NULL) return;
//     cout<<root->val<<" ";
//     preOrderTraversal(root->left);
//     preOrderTraversal(root->right);
// }

// void inOrderTraversal(node* root){
//     if(root == NULL) return;
//     inOrderTraversal(root->left);
//     cout<<root->val<<" ";
//     inOrderTraversal(root->right);
// }

// void postOrderTraversal(node* root){
//     if(root == NULL) return;
//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<<root->val<<" ";
// }


// void printNthLevel(node* root,int level){
//     if(root == NULL) return;
//     if(level==0) cout<<root->val<<" ";
//     printNthLevel(root->left,level-1);
//     printNthLevel(root->right,level-1);
// }  

// int level(node* root){
//     if(root == NULL) return 0;
//     else return 1+max(level(root->left),level(root->right));
// }

// void levelOrder(node* root){
//     int lev=level(root);
//     for(int i=0;i<lev;i++)  {
//         printNthLevel(root,i);
//         cout<<endl;
//     }
// }

// void levelOrderQueue(node* root){
//     queue<node*>q;
//     q.push(root);
//     while(q.size()){
//         node* temp=q.front();
//         cout<<temp->val<<" ";
//         q.pop();
//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }
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
//     levelOrderQueue(a);
// }


#include<iostream>
#include<queue>
#include<climits>
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
int level(node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void preOrder(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
void inOrder(node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
void printNthlevel(node* root,int level){
    if(root==NULL) return;
    if(level==0) cout<<root->val<<" ";
    printNthlevel(root->left,level-1);
    printNthlevel(root->right,level-1);
}
void levelOrder(node* root){
    int treeLevel=level(root);
    for(int i=0;i<treeLevel;i++) {
        printNthlevel(root,i);
        cout<<endl;
    }
}
void levelOrderQueue(node* root){ //BFS
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

node* constructTree(vector<int>v){
    queue<node*>q;
    node* root=new node(v[0]);
    q.push(root);
    int n=v.size();
    int i=1;
    int j=2;
    while(q.size() && i<n){
        node* temp=q.front();
        q.pop();
        node* l=NULL;
        node* r=NULL;
        if(v[i]!=INT_MIN) l=new node(v[i]);
        if(j<n && v[j]!=NULL) r=new node(v[j]);
        temp->left=l;
        temp->right=r;
        if(l) q.push(l);
        if(r) q.push(r);
        i+=2;
        j+=2;
    }
    return root;

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

    // preOrder(a);
    // cout<<'\n';
    // inOrder(a);
    // cout<<'\n';
    // postOrder(a);
    // cout<<'\n';
    // printNthlevel(a,2);
    // cout<<'\n';
    // levelOrder(a);
    // cout<<'\n';
    // levelOrderQueue(a);
    vector<int>v={10,20,30,40,INT_MIN,60,70,80,INT_MIN};
    node* root=constructTree(v);
    levelOrderQueue(root);




}