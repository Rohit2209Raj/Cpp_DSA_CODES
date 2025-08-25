#include<iostream>
using namespace std;
void rchar(string s,string &sol,char rem,int idx){
    if(s.size()==idx){
        cout<<sol<<endl;
        return;
    }
    char x=s[idx];
    if(x==rem) rchar(s,sol,rem,idx+1);
    else {
        sol.push_back(x);
        rchar(s,sol,rem,idx+1);
        sol.pop_back(); // for backtracking or storing in vector
    }
    

}
int main(){
    string s;
    getline(cin,s);
    string sol="";
    rchar(s,sol,'a',0);
}