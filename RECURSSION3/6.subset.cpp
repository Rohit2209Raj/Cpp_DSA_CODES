#include<iostream>
#include<vector>
using namespace std;
// vector<string> subset2(string str,string temp,vector<string>&sol,int idx){
//     if(idx==str.size()){
//         sol.push_back(temp);
//         return sol;
//     }
//     char ch=str[idx];
//     subset2(str,temp+ch,sol,idx+1);
//     subset2(str,temp,sol,idx+1);
//     return sol;
// 

// void subset2(string str,string &temp,vector<string>&sol,int idx){
//     if(idx==str.size()){
//         sol.push_back(temp);
//         return ;
//     }
//     char ch=str[idx];
//     temp.push_back(ch);
//     subset2(str,temp,sol,idx+1);
//     temp.pop_back();
//     subset2(str,temp,sol,idx+1);
// }
// int main(){
//     string str;
//     getline(cin,str);
//     vector<string>sol;
//     string temp="";
//     subset2(str,temp,sol,0);
//     for(int i=0;i<sol.size();i++){
//         cout<<sol[i]<<endl;
//     }
// }



















