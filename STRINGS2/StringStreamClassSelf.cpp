#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="rohit is from a city sonpur";
    int count=1;
    int space=0;
    int i=0;
    while(s[i]!='\0'){
       if(s[i]!=' '){
        cout<<s[i];
        i++;
       }
       else{
        count++;
        cout<<endl;
        i++;
        
       }
    }
    cout<<endl<<count;
}