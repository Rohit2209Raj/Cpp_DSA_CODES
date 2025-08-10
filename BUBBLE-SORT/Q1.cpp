#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // vector<char>v;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]>97)v.push_back(s[i]);
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    cout<<str;

    for(int i=0;i<str.size()-1;i++){
          for(int j=0;j<str.size()-1;j++){
            if(str[j]>str[j+1]) swap(str[j],str[j+1]);
          }
    }

    /*
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
    }
    */
    cout<<endl;
    cout<<str;
    cout<<endl;

    //sort(s.begin(),s.end());
    
    cout<<s;
}