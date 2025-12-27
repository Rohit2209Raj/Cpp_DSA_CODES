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
            node* l=NULL;
            node* r=NULL;
            if(v[i]!=INT_MIN) l=new node(v[i]);
            if(j!=n && v[j]!=INT_MIN) r=new node(v[j]);
            temp->left=l;
            temp->right=r;
            if(l!=NULL) q.push(l);
            if(r!=NULL) q.push(r);

            i+=2;
            j+=2;
        }
        return root;
};
int main(){
    vector<int>v={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    node* root=construct(v);



    // PRINT IT TO SEE AND TO VERIFY
    



}