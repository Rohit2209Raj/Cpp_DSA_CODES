#include<iostream>
#include<string>
using namespace std;
int main(){
    int vowel=0;
    // int n;
    // cout<<"Enter size of ch array: ";
    // cin>>n;
    // char name[n];
    // for(int i=0;i<n;i++){
    //       cin>>name[i];
    // }
    
    // for(int i=0;i<n;i++){
    //      if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
    //         vowel=vowel+1;
    //         continue;
    //      }
    //      else continue;
    // }
    // cout<<vowel;

    string name;
    getline(cin,name);
    int i=0;
    while(name[i]!='\0'){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            vowel++;
            i++;
        }
        else i++;
    }
    cout<<vowel;
}