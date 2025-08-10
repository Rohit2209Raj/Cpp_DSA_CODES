#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int b;
    int f;
    int s=0;
    vector<int>arr;
    Queue(int arz){
        b=0;
        f=0;
        s=0;
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
        s++;
    }

    void pop(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
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