#include<iostream>
using namespace std;
void print_Path(int sc,int sr,string &sol){
     if(sc==0 && sr==0){
        cout<<sol<<endl;
        return;
    }
     if(sc<0 || sr<0) return;
     sol.push_back('L');
     print_Path(sc-1,sr,sol);
     sol.pop_back();
     sol.push_back('U');
     print_Path(sc,sr-1,sol);
     sol.pop_back();
}
int main(){
    int sc;
    cout<<"enter starting column: ";
    cin>>sc;
    int sr;
    cout<<"enter starting row: ";
    cin>>sr;
    string sol="";
    print_Path(sc,sr,sol);
}