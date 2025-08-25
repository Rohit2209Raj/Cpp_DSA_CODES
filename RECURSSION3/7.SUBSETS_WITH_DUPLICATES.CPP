#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// void subsets(string s,string sol,vector<string>&ans,bool flag){
//     if(s==""){
//         ans.push_back(sol);
//         return;
//     }
//     char ch=s[0];
//     if(s.size()==1){
//         subsets(s.substr(1),sol+ch,ans,true);
//         subsets(s.substr(1),sol,ans,true);
//         return;
//     }
//     char dh=s[1];
//     if(ch==dh){
//         if(flag==true)subsets(s.substr(1),sol+ch,ans,true);
//         subsets(s.substr(1),sol,ans,false);
//     }
//     else{
//         if(flag==true)subsets(s.substr(1),sol+ch,ans,true);
//         subsets(s.substr(1),sol,ans,true);
//     }
// }
// int main(){
//     string s="122";
//     sort(s.begin(),s.end());
//     vector<string>ans;
//     subsets(s,"",ans,true);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
// }

// ATTEMPT 2;
void fill(vector<string>&sol,string &temp,string &s,int idx,bool flag){
    if(idx==s.size()){
        sol.push_back(temp);
        return;
    }
    char ch=s[idx];
    if(idx==s.size()-1){
        temp.push_back(ch);
        fill(sol,temp,s,idx+1,true);
        temp.pop_back();
        fill(sol,temp,s,idx+1,true);
        return;
    }
    char dh=s[idx+1];
    if(ch==dh){
        temp.push_back(ch);
        if(flag==true) fill(sol,temp,s,idx+1,true);
        temp.pop_back();
        fill(sol,temp,s,idx+1,false);
    }
    else{
        temp.push_back(ch);
        if(flag==true) fill(sol,temp,s,idx+1,true);
        temp.pop_back();
        fill(sol,temp,s,idx+1,true);
    }
}
int main(){
    string s;
    getline(cin,s);
    vector<string>sol;
    string temp;
    fill(sol,temp,s,0,true);
    for(int i=0;i<sol.size();i++) cout<<sol[i]<<endl;
}
