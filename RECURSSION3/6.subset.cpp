#include<iostream>
#include<vector>
using namespace std;
// void subset(string str,string sol,int idx){
//     if(idx==str.size()){
//          cout<<sol<<endl;
//          return;
//     }
//     char ch=str[idx];
//     subset(str,sol+ch,idx+1);
//     subset(str,sol,idx+1);
// }
vector<string> subset2(string str,string temp,vector<string>&sol,int idx){
    if(idx==str.size()){
        sol.push_back(temp);
        return sol;
    }
    char ch=str[idx];
    subset2(str,temp+ch,sol,idx+1);
    subset2(str,temp,sol,idx+1);
    return sol;
}
int main(){
    string str;
    getline(cin,str);
    vector<string>sol;
    subset2(str,"",sol,0);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}