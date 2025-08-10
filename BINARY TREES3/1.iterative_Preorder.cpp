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

void fill(vector<int>&sol,node* root){
        if(root==NULL) return;
        stack<node*>st;
        st.push(root);
        while(st.size()>0){
            node* temp=st.top();
            st.pop();
            sol.push_back(temp->val);
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
    }
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    node* root=construct(v);
    vector<int>sol;
    fill(sol,root);
    for(int i=0;i<sol.size();i++) cout<<sol[i]<<" ";


    // iterative inorder and postorder in leetcode


}