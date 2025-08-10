#include<iostream>
using namespace std;
int main(){
    string s="abbcdeffghh";
    int x=0;
    int i=0;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]) x++;
    }
    cout<<x;
}
//abbcdeffghh