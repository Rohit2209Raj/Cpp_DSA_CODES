#include<iostream>
using namespace std;
int num_Ways0(int sc,int sr,int ec,int er){
    if(sc==ec &&  sr==er) return 1;
    if(sc>ec || sr>er) return 0;
    return num_Ways0(sc+1,sr,ec,er) + num_Ways0(sc,sr+1,ec,er) ;
}


void num_Ways(int sc,int sr,int ec,int er,string sol){
    if(sc==ec &&  sr==er) {
        cout<<sol<<endl;
        return;
    }
    if(sc>ec || sr>er) return;
    num_Ways(sc+1,sr,ec,er,sol+'R') ;
    num_Ways(sc,sr+1,ec,er,sol+'D') ;
}

void num_Ways2(int sc, int sr, int ec, int er, string &sol) {
    if (sc == ec && sr == er) {
        cout << sol << endl;
        return;
    }
    if (sc > ec || sr > er) return;

    sol.push_back('R'); // Move Right
    num_Ways2(sc + 1, sr, ec, er, sol);
    sol.pop_back(); // Backtrack

    sol.push_back('D'); // Move Down
    num_Ways2(sc, sr + 1, ec, er, sol);
    sol.pop_back(); // Backtrack
}
int main(){
    int ec;
    cout<<"enter target column: ";
    cin>>ec;
    int er;
    cout<<"enter target row: ";
    cin>>er;
    int sc;
    cout<<"enter starting column: ";
    cin>>sc;
    int sr;
    cout<<"enter starting row: ";
    cin>>sr;
    string sol="";
    num_Ways(sc,sr,ec,er,sol);
}