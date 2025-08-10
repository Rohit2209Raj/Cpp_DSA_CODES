#include<iostream>
#include<vector>
  #include<algorithm>
using namespace std;

void reversePart(vector<int>&v,int i,int j){
     while(j>i){
        swap(v[i],v[j]);
        i++;
        j--;
     }
}
int main(){
vector<int>v;
v.push_back(1);
v.push_back(6);
v.push_back(2);
v.push_back(3);
v.push_back(7);
v.push_back(4);
 for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<" ";
   // cout<<v.size();
 }
 cout<<endl;

 int k;
 cout<<"Enter the number of roatation: ";
 cin>>k;
 if(k>v.size()) k=k%v.size();
 reversePart(v,v.size()-k,v.size()-1);
 reversePart(v,0,v.size()-k-1);
 reversePart(v,0,v.size()-1);
 cout<<endl;
 for(int i=0;i<=v.size()-1;i++){
    cout<<v[i]<<" ";
 }
 








}

