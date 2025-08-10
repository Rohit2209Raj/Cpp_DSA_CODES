// This Q is to print subset without them containig duplicates;
// wrong answer
#include<iostream>
using namespace std;
void subset(string s,string sol,int idx){
    bool flag=true;
    if(idx==s.size()){
        cout<<sol<<endl;
        return;
    }
    if(idx>0) if(s[idx]==s[idx-1]) flag=false;
    char ch=s[idx];
    if(flag==true){
        subset(s,sol+ch,idx+1);
        subset(s,sol,idx+1);
        }
    else {
        subset(s,sol,idx+1);
        //subset(s,sol,idx+1);
    }
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"The following are the subsets: "<<endl;
    subset(s,"",0);
}