#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int arr[]={1,3,2,4,3,4,1,6};
vector<int>v;
for(int i=0;i<=7;i++){
    v.push_back(arr[7-i]);
}

for(int i=0;i<=v.size()-1;i++){
      cout<<v[i]<<" ";
}


  
}