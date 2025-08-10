#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={1,2,3,4,5,6,7,8,9};
    int res[3][3]={0};
    for(int i=0;i<3;i++){
        int j=0;
        while(j<3){
            int k=0;
            while(k<3){
            res[i][j]+=arr[i][k]*brr[k][j];
            k++;
        }
        j++;
    }
}
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

/*
30 36 42
66 81 96
102 126 150
*/