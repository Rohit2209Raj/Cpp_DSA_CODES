#include<iostream>
#include<climits>
#include<vector>
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


void construct(node* root,vector<node*>vn,int &idx){
    if(idx>=vn.size()) return;
    queue<node*>q;
    q.push(root);
    // int i=1;
    // while(i<vn.size()){
    //     node*temp=q.front();
    //     q.pop();
    //     q.push(vn[i++]);
    //     temp->left=q.front();
    //     q.pop();
    //     q.push(vn[i++]);
    //     temp->right=q.front();
    //     q.pop();
    //     q.push(vn[i++]);
    //     // q.push(vn[i++]);
    //     // q.push(vn[i++]);

    // }

        node*temp=q.front();
        q.pop();
        q.push(vn[idx++]);
        node* left=temp->left=q.front();
        q.pop();
        q.push(vn[idx++]);
        node* right=temp->right=q.front();
        q.pop();
        construct(left,vn,idx);
        construct(right,vn,idx);
}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    vector<node*>vn;
    for(int i=0;i<v.size();i++){
        node* temp=new node(v[i]);
        vn.push_back(temp);
    }
    node* root=vn[0];
    int idx=1;
    construct(root,vn,idx);
    levelOrderQueue(root);



}