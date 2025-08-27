#include<iostream>
#include<string>
#include<vector>
using namespace std;
// void permutation(string s,string temp,vector<string>&sol,int org){
//     if(temp.size()==org){
//         cout<<temp<<endl;
//         sol.push_back(temp);
//         return;
//     }
//     int n=s.size();
//     for(int i=0;i<n;i++){
//         string ls,rs;
//         for(int j=0;j<i;j++){
//             ls.push_back(s[j]);
//         }
//         for(int k=i+1;k<n;k++){
//             rs.push_back(s[k]);
//         }
//         permutation(ls+rs,temp+s[i],sol,org);
//     }
// }
// int main(){
//     string s="abc";
//     vector<string>sol;
//     int z=s.size();
//     permutation(s,"",sol,z);
//     for(int i=0;i<sol.size();i++){
//         cout<<sol[i];
//         cout<<endl;
//     }
// }
// void permutation(string str ,string& temp,int s){
//     if(temp.size()==s){
//         cout<<temp<<endl;
//         return;
//     }
//     for(int i=0;i<str.size();i++){
//         temp.push_back(str[i]);
//         string ls,rs;
//         for(int j=0;j<i;j++) ls+=str[j];
//         for(int k=i+1;k<str.size();k++) rs+=str[k];
//         permutation(ls+rs,temp,s);
//         temp.pop_back();
//     }
// }
// // just be sure ki jab string change hogi to  string ka size bhi chage hoga then never iterate thorigh s but str.size() as str.size() ois always different
// int main(){
//     string str;
//     getline(cin,str);
//     string temp="";
//     int s=str.size();
//     permutation(str,temp,s);

// }