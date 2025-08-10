#include<iostream>
#include<vector>
#include<queue>
#include<stack>
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
node* construct(vector<int>v){
        node* root=new node(v[0]);
        int n=v.size();
        queue<node*>q;
        q.push(root);
        int i=1;
        int j=2;
        while(q.size() && i<n){
            node* temp=q.front();
            q.pop();
            node* l;
            node* r;
            if(v[i]!=INT_MIN) l=new node(v[i]);
            else l=NULL;
            if(j!=n && v[j]!=INT_MIN) r=new node(v[j]);
            else r=NULL;
            temp->left=l;
            temp->right=r;
            if(l!=NULL) q.push(l);
            if(r!=NULL) q.push(r);

            i+=2;
            j+=2;
        }
        return root;
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
void display_leaf(node* root){
    if(root==NULL) return;
    if(!root->left && !root->right) cout<<root->val<<" ";
    display_leaf(root->left);
    display_leaf(root->right);

}
// void display_left(node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     if(root->left) display_left(root->left);
//     else{
//         if((root->right)->left || (root->right)->left) display_left(root->right);
//         else return;
//     }
// }
void display_left(node* root){
    if(root == NULL) return;

    if(root->left){
        // Print and go left
        cout << root->val << " ";
        display_left(root->left);
    }
    else if(root->right){
        // If no left, go right
        cout << root->val << " ";
        display_left(root->right);
    }
    // Don't print leaf nodes
}
void display_right(node* root){
    if(root == NULL) return;

    // Exclude leaf nodes
    if(root->left == NULL && root->right == NULL) return;

    if(root->right)
        display_right(root->right);
    else if(root->left)
        display_right(root->left);

    cout << root->val << " ";
}
int main(){
    int x=INT_MIN;
    vector<int>v={1,2,3,4,5,x,6,7,x,8,x,9,10,x,11,x,12,x,13,x,14,15,16,x,17,x,x,18,x,19,x,x,x,20,21,22,23,x,24,25,26,27,x,x,28,x,x};
    node* root=construct(v);
    levelOrder(root);
    node* temp=root;
    display_left(temp);
    //cout<<endl;
    temp=root;
    display_leaf(temp);
    //cout<<endl;
    temp=root;
    display_right(temp->right);
    





}
