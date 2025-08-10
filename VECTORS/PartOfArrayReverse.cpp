#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int arr[]={6,1,4,3,4,2,3,1};
//int i=0,j=7;
cout<<"Enter the indises to reverse: ";
int i,j;
cin>>i;
cin>>j;
while(j>=i){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
for(int i=0;i<=7;i++){
    cout<<arr[i]<<" ";
}

}