#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
int sumr(int arr[3][4],int row){
    int sumr=0;
    int x=1;
    //   for(int j=3;j>=0;j--){
    //         sumr+=pow(2,j)*arr[row][3-j];
    //   }
    for(int j=3;j>=0;j--){
        sumr+=x*arr[row][j];
        x*=2;
    }
      return sumr;
}
int zandoc(int arr[3][4],int col){
   int no0=0;
   int no1=0;
   for(int i=0;i<=2;i++){
    if(arr[i][col]==0) no0++;
    else no1++;
   }
    
}
int main(){
    int arr[3][4]={0,0,1,1,1,0,1,0,1,1,0,0};
    sumr(arr,1);
    cout<<sumr;

}