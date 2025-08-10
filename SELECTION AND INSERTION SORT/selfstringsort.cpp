#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="rohit raj";
    for(char ele: str){
        cout<<ele;
    }
    int min;
    int minidx;
    int n=str.size();
    for(int i=0;i<n-1;i++){
        min=str[i];
        minidx=-1;
        for(int j=i+1;j<n;j++){
            if(str[j]<min) {
                min=str[j];
                minidx=j;
            }
        }
        swap(str[i],str[minidx]);
    }
    cout<<endl;
    // for(char ele: str){
    //     cout<<ele;
    // }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}