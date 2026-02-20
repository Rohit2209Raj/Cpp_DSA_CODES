#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int>pq;
    // pq.push(10);
    // pq.push(50);
    // pq.push(18);
    // pq.push(3);
    // pq.push(98);

    // cout<<pq.top();
    // pq.pop();
    // cout<<pq.top();
    // cout<<endl;

    priority_queue<int,vector<int>, greater<int>>pq;
    pq.push(10);
    pq.push(50);
    pq.push(18);
    pq.push(3);
    pq.push(98);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
}