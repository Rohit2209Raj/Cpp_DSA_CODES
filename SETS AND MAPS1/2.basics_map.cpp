#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // PAIR CONCEPT
    // pair<string,int>p;
    // p.first="Rohit";
    // p.second=2209;
    // cout<<p.first<<" "<<p.second;

    unordered_map<string,int>mp;
    pair<string,int>p1;
    p1.first="Rohit";
    p1.second=2209;
    mp.insert(p1);
    pair<string,int>p2;
    p2.first="jatin";
    //p2.second=0613; // c++ will treat 0613 as octal number
    p2.second=613;
    mp.insert(p2);

    // 2nd method

    mp["Rahul"]=99;

    for(auto p:mp){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    cout<<"Size: "<<mp.size()<<endl;
    mp.erase("Rohit");
    cout<<endl;
    if(mp.find("shyam")!=mp.end()){
        cout<<"FOUND!!!!!!!"<<endl;
    }
    else{
        cout<<"NOT FOUND!!!"<<endl;
    }
    cout<<"After changes..."<<endl;
    for(auto p:mp){
        cout<<p.first<<" "<<p.second;
        cout<<endl;
    }
    cout<<"Size: "<<mp.size()<<endl;


}
