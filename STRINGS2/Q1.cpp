#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="rohit is from city sonpur.he is doint btech at poornima";
    vector<string>v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    int maxcount=0;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(count,maxcount);
    }
    cout<<maxcount;
    
}