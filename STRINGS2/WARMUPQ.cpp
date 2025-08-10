#include<iostream>
#include<string>
using namespace std;
int main(){
 string s;
 getline(cin,s);
 cout<<s<<endl;
 int n=s.size();
 cout<<n<<endl;
 int count=0;
 for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]) {
        count++;
 }
 else continue;
 }
 cout<<count;
}