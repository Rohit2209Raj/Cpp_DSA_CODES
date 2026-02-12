#include<iostream>
#include<algorithm>
using namespace std;

class heap{
    public:

    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size++;
        arr[size] = val;

        int index=size;
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                break;
            }
            
        }
    }

    void deletefromheap(){
        
        if(size==0){
            cout<<"Size is 0, so can't delete anything: ";
            return;
        }

        arr[1]=arr[size];
        size--;

        int i=1;

        while(i<=size){
            int lchild=i*2;
            int rchild=2*i+1;

            if(lchild<=size && arr[i] < arr[lchild]) {
                swap(arr[lchild],arr[i]);
                i=lchild;
            }
            else if(rchild<=size && arr[i] < arr[rchild]){
                swap(arr[i],arr[rchild]);
                i=rchild;
            }
            else return;
        }
}

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    heap h;
    h.insert(60);
    h.insert(550);
    h.insert(55);
    h.insert(30);
    h.insert(20);
    h.insert(40);
    h.insert(155);
    h.print();
}