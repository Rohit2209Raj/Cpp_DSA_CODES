#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void rev(queue<int>&q,int k){
    int z=q.size();
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<z-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }

}
void display(queue<int>&q){
    int n=q.size();
    while(n!=0){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
    n--;
}
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    display(q);
    cout<<endl;
    q.push(60);
    int  k;
    cout<<"Enter k: ";
    cin>>k;
    if(k>q.size()) k=q.size();
    display(q);
    cout<<endl;
    rev(q,k);
    display(q);
}