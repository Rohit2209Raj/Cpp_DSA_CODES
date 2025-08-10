#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int minr=0;
    int minc=0;
    int maxr=2;
    int maxc=2;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;

        // down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        //left
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;

        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}