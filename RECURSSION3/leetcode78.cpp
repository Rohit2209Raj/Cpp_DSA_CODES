#include<iostream>
#include<vector>
#include<string>
using namespace std;
// vector<vector<int> > subset(vector<int>v,vector<vector<int> >&sol,int idx, vector<int>tempans){
//      int nums=v[idx];
//      if(idx==v.size()){
//          sol.push_back(tempans);
//          return sol;
//      }
//       subset(v,sol,idx+1,tempans);
//       tempans.push_back(nums);
//       subset(v,sol,idx+1,tempans);
// }
void subset(vector<int>v,vector<vector<int> >&sol,int idx, vector<int>tempans){
    int nums=v[idx];
    if(idx==v.size()){
        sol.push_back(tempans);
        return;
    }
     subset(v,sol,idx+1,tempans);
     tempans.push_back(nums);
     subset(v,sol,idx+1,tempans);
    }
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<vector<int> >sol;
    vector<int>tempans;
    subset(v,sol,0,tempans);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    
}