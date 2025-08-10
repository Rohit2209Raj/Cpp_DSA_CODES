#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int b;
    int f;
    vector<int>arr;
    Queue(int arz){
        b=0;
        f=0;
        vector<int>v(arz);
        arr=v;
    }
    
    void push(int val){
        if(b==arr.size()){ 
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }

    void pop(){
        if(f-b==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }

    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}