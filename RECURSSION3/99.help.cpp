#include<iostream>
using namespace std;
int main(){
    string number="1231";
    char digit='1';
        string left;
        string right;
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                cout<<i<<endl;
                left=number.substr(0,i);
                cout<<"left="<<left<<endl;
                right=number.substr(i+1);
                cout<<"right"<<right<<endl;
            }
        }
        cout<<left+right;
    }
