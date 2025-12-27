#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // s.insert(100);
    // s.insert(1); // cant add duplicate elements
    // s.erase(100);
    //cout<<s.size();
    //cout<<endl;
    for(int ele: s) cout<<ele<<" ";
    cout<<endl;
    // int target=40;
    // if(s.find(target)!=s.end()){
    //     cout<<"Exists"<<endl;
    // }
    // else cout<<"Not Exists";
}

