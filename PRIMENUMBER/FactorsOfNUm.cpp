#include<iostream>
#include<cmath>
using namespace std;
void factor(int nums){
    for(int i=2;i<sqrt(nums);i++){
        cout<<i<<" in upper"<<endl;
        // if(nums%i==0){
        //   cout<<i<<" ";
        // }
    }
    for(int i=sqrt(nums);i<nums;i++){
        cout<<i<<" in lower"<<endl;
        //   if(nums%i==0){
        //     cout<<i<<" ";
        // }
    }
}
int main(){
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    factor(n);
}