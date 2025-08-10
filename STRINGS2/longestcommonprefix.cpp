#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
   cout<<"enter number of strings: ";
   cin>>n;
   string s[n+1];
   for(int i=0;i<n+1;i++){
      getline(cin,s[i]);
   }
//    vector<string>v(n);
//    cout<<v.size()<<endl;
//    string s;
//    for(int i=0;i<v.size();i++){
//     getline(cin,s);
//     v.push_back(s);
//     cout<<endl<<s;
//     s=" ";
//     cout<<endl<<"***"<<s;
//    }
    
   cout<<endl;
   for(int i=0;i<n+1;i++){
      for(int j=0;(s[i])[j]!='\0';j++){
            cout<<(s[i])[j]<<" ";
      }
      cout<<endl;

   }

}