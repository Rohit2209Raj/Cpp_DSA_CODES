#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(string s,string temp,vector<string>&sol,int org){
    //cout<<"Entered with str: "<<s<<endl;
    if(temp.size()==org){
        sol.push_back(temp);
        return;
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        string ls,rs;
        for(int j=0;j<i;j++){
            ls.push_back(s[j]);
        }
        for(int k=i+1;k<n;k++){
            rs.push_back(s[k]);
        }
        permutation(ls+rs,temp+s[i],sol,org);
    }
}
int main(){
    string s="abcde";
    vector<string>sol;
    int z=s.size();
    permutation(s,"",sol,z);
    for(int i=0;i<sol.size();i++){
        for(int j=0;j<sol[i].size();j++){
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}