#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int minr=0;
    int minc=0;
    int maxr=3;
    int maxc=3;
    while(minr<=maxr){
        // right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr) break;
        
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
    }
}