#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>

using namespace std;
int sumr(int arr[3][4],int li){
    int sumr=0;
    for(int j=0;j<=3;j++){
          sumr+=arr[li][j];
    }
}
int sum(int arr[3][4]){
    int sum=0;
    int min=INT_MAX;
    int li=0;
    
    for(int i=0;i<3;i++){
        for(int j=3;j>=0;j--){
            sum+=pow(2,j)*arr[i][3-j];
        }
        cout<<sum<<"\n";
        if(sum<min) {
        min=sum;
        li=i;
        sum=0;}
        else{
            sum=0;
        }

    }
    reverse(arr,li);
    
    if(sumr(arr,li)<min);

    
    // return li;
}
void reverse(int arr[3][4],int li){
    int k=0;
    int j=3;
    while(k<=j){
         if(arr[li][k]==0 && arr[li][j]==1) {
            swap(arr[li][k],arr[li][j]);
            k++;
            j--;
         }
         else {
             k++;
             j--;


         }


        }
}
int main(){
    int arr[3][4]={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
   // int li;
//    int li= sum(arr);
//    cout<<li<<"\n";
//     //cout<<li;
//     reverse(arr,li);
//    li=sum(arr);
    
//     reverse(arr,li);
//     cout<<li;
   


}