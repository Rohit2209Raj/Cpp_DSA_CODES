#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void change(vector<int>a){ // new vector will be formed;
//     a[0]=100;}
//     for(int i=0;i<4;i++){
//         cout<<a[i]<<" ";
//     }
void change(vector<int>&a){ 
   a[0]=100;
}
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(56);
    v.push_back(78);
    v.push_back(74);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    change(v);
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
}
