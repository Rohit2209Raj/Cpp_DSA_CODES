#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(15);
    for(auto ele: s){
        cout<<ele<<" ";
    }
    cout<<endl;
    // always in assending order

    map<int,int>mp;
    mp[1]=100;
    mp[2]=99;
    mp[3]=101;

    for(auto ele: mp){
        cout<<ele.first<<" --- "<<ele.second<<" ";
    }
    // assending in key 
    
    map<string,int>mp2;
    mp2["Rohit"]=100;
    mp2["Jatin"]=99;
    mp2["Rahul"]=101;
    cout<<endl;

    for(auto ele: mp2){
        cout<<ele.first<<" --- "<<ele.second<<" ";
    }
    // in string it compares charatcer by character
    


}