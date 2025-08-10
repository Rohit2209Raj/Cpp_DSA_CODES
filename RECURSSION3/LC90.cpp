#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string s,string sol,int idx,bool flag,vector<string>&ans){
     if(idx==s.size()){
         ans.push_back(sol);
         return;
     }

     char ch=s[idx];
     if(s.size()==1){
        subset(s,sol,idx+1,true,ans);
        sol.push_back(ch);
        if(flag==true)subset(s,sol,idx+1,true,ans);
        return;
     }
     
      char dh=s[idx+1];
      if(ch==dh){
        subset(s,sol,idx+1,false,ans);
        sol.push_back(ch);
       if(flag==true) subset(s,sol,idx+1,true,ans);
      }

      else{
        subset(s,sol,idx+1,true,ans);
        sol.push_back(ch);
       if(flag==true) subset(s,sol,idx+1,true,ans);
      }
     
}
int main(){
    string s="aba";
    vector<string>ans;
    subset(s,"",0,true,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    // pata nahi chal kyu na raha
}