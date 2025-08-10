#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="rohit is from city sonpur.he is doint btech at poornima";
    s+=" ";
    vector<string>v;
    int i=0;
    string sol=" ";
    while(s[i]!='\0'){
       if(s[i]!=' '){
       // cout<<s[i]<<" ";
        sol+=s[i];
        i++;
        }
       //v.push_back(sol);
       else {
        v.push_back(sol);
        sol=" ";
        i++;
    }
    }
    int count=1;
    int max=0;
    sort(v.begin(),v.end());
    for(int i=0;i<=v.size()-1;i++){
       for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]) {
                count++;
                max=i;
       }
       }
    }
    cout<<endl<<count<<" "<<v[max];
}
