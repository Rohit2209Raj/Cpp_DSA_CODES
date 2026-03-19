#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    int arr[]={97,46,37,12,3,7,31,6,9};

    for(auto i:arr) pq.push(i);

   while(pq.size()){
    cout<<pq.top()<<endl;
    pq.pop();

   }
}