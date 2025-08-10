#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string name="rohit raj";
    // cout<<name.size()<<endl; // 9 hi dega \0 ko cout nahi krta ye; smae hai str.length();
    // name.push_back('b'); /// only for charatcters
    // cout<<name<<endl;
    // name.pop_back();
    // cout<<name<<endl;

    string name1="rohit";
    string name2="raj";
    name2=name2+'c';
    string cname=name1+name2;
    cout<<cname<<endl;
    reverse(name1.begin(),name1.begin()+3);
    cout<<name1;



}
