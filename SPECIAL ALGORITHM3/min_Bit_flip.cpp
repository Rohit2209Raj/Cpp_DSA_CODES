#include<iostream>
using namespace std;
// string binary(string &s){
//     int n=s.size();
//     string sol="";
//     int i=stoi(s);
//     while(i!=0){
//         sol+=to_string(i%2);
//         i=i/2;
//     }
//     string solrev;
//     for(int i=sol.size()-1;i>=0;i--) solrev=solrev+sol[i];
//     return solrev;
// }
// void mfb(int n1,int n2){
//     string s1=(to_string(n1));
//     string s2=to_string(n2);
//     string s1b=binary(s1);
//     string s2b=binary(s2);
//     if(s1b.size()>s2b.size()){
//         for(int i=0;i<s1b.size()-s2b.size();i++){
//             s2b="0"+s2b;
//         }
//     }
//     else{
//         for(int i=0;i<s2b.size()-s1b.size();i++){
//             s1b="0"+s1b;
//         }
//     }
//     int count=0;
//     for(int i=0;i<s1b.size();i++){
//         if(s1b[i]!=s2b[i]) count++;
//     }
//     cout<<count;

// }
int main(){
    int n1,n2;
    cout<<"Enter initial and final numbers: ";
    cin>>n1>>n2;
    // mfb(n1,n2);
    cout<<__builtin_popcount(n1^n2);

}
