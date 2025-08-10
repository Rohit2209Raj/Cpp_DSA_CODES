#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void subsets(string s,string sol,vector<string>&ans,bool flag){
    if(s==""){
        ans.push_back(sol);
        return;
    }
    char ch=s[0];
    if(s.size()==1){
        subsets(s.substr(1),sol+ch,ans,true);
        subsets(s.substr(1),sol,ans,true);
        return;
    }
    char dh=s[1];
    if(ch==dh){
        if(flag==true)subsets(s.substr(1),sol+ch,ans,true);
        subsets(s.substr(1),sol,ans,false);
    }
    else{
        if(flag==true)subsets(s.substr(1),sol+ch,ans,true);
        subsets(s.substr(1),sol,ans,true);
    }
}
int main(){
    string s="122";
    sort(s.begin(),s.end());
    vector<string>ans;
    subsets(s,"",ans,true);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}