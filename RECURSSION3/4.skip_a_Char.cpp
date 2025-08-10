#include<iostream>
#include<string>
using namespace std;
// void RemoveChar(string s,string sol){  // bahut kharab space complextiy kyu ki har baar jab ham string.substrkarte hai to eak nayi string banti hai jo bahut space khati hai + jab str+ch hota hai to vo vector ki tarah kabhi kabhi 2 double size ki bhi ho jaati hai
//     char ch=s[0];
//    if(s=="") {
//     cout<<sol<<endl;
//     return;}
//    if(ch=='r'){
//     RemoveChar(s.substr(1),sol);
//    }
//    else RemoveChar(s.substr(1),sol+ch);
// }
void RemoveChar(string s,string sol,int idx){  
   char ch=s[idx];
   if(idx==s.size()) {
    cout<<sol<<endl;
    return;}
   if(ch=='r') RemoveChar(s,sol,idx+1);
   else RemoveChar(s,sol+ch,idx+1);
}
int main(){
    string s;
    getline(cin,s);
    RemoveChar(s,"",0);
}