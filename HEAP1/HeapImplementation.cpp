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
void heapify(int arr[],int n,int idx){
        int largestidx=idx;
        int left=idx*2+1;
        int right=idx*2+2;

        if(left<n && arr[left] > arr[largestidx]){
            largestidx=left;
        }
        if(right<n && arr[right]>arr[largestidx]){
            largestidx=right;
        }

        if(largestidx != idx){
            swap(arr[largestidx],arr[idx]);
            heapify(arr,n,largestidx);
        }
    }

int main(){
    // heap h;
    // h.insert(60);
    // h.insert(550);
    // h.insert(55);
    // h.insert(30);
    // h.insert(20);
    // h.insert(40);
    // h.insert(155);
    // h.print();

    // h.deletefromheap();
    // h.print();

    // int arr[]={60,550,55,30,20,40,155};
    // int n=sizeof(arr)/sizeof(arr[0]);

    // for(int i=(n/2);i>=0;i--){
    //     heapify(arr,n,i);
    // }

    // cout<<"After heapify the array: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // // WE WILL DO HEAPSORT
    // Using a maxheap
    int arr[]={70,60,55,45,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int size=n-1;
    int c=0;
    while(size>0){
        swap(arr[0],arr[n-1-c]);
        cout<<"After swap"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        heapify(arr,n-c,0);
        cout<<"After heapify"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        size--;
        c++;
    }

    cout<<"After sorting the array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}