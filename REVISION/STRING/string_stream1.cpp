#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string: ";
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string>v;
    while(ss>>word){
        v.push_back(word);
    }
    int maxcount=0;
    int maxele=-1;
    sort(v.begin(),v.end());
    int count=0;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
            maxele=i;
        }
        maxcount=max(maxcount,count);
        count=0;
    }
    cout<<maxcount+1<<endl;
   // for(int i=0;i<v.size();i++) cout<<v[i]<<endl;

}