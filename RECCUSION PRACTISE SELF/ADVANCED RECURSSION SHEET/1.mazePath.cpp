#include<iostream>
using namespace std;
void print_Path(string &sol,int ec,int er,int sc=0,int sr=0){
    if(sc==ec && sr==er) {
        cout<<sol<<endl;
        return;
    }
    if(sc>ec || sr>er) return;
    sol.push_back('R');
    print_Path(sol,ec,er,sc+1,sr);
    sol.pop_back();
    sol.push_back('D');
    print_Path(sol,ec,er,sc,sr+1);
    sol.pop_back();

}
int main(){
    int ec,er;
    string sol="";
    cout<<"Enter ending column: ";
    cin>>ec;
    cout<<"Enter ending row: ";
    cin>>er;
    print_Path(sol,ec,er);
}