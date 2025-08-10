#include<iostream>
#include<vector>
using namespace std;
// Problem: Print all paths to reach the top where you can take 1, 2, or 3 steps at a time.
// Function: void printPaths(int n, string path)
// void printPaths(int n,string sol){
//     cout<<"Entering with "<<n<<" and sol: "<<sol<<endl;
//     if(n==0){
//         cout<<"Base case hit for sol: "<<sol<<endl;
//         cout<<sol<<" "<<endl;
//         return;
//     }
//     if(n<0) {
//         cout<<"Outside range: "<<endl;
//         return;
//     }
//     //cout<<"Returning to print 1 for n: "<<n<<" and sol: "<<sol<<endl;
//     printPaths(n-1,sol+'1');
//     //cout<<"Returning to print 2 for n: "<<n<<" and sol: "<<sol<<endl;
//     printPaths(n-2,sol+'2');
// }
// int main(){
//     int n;
//     cout<<"Enter number of stairs: ";
//     cin>>n;
//     string s="";
//     printPaths(n,s);
// }

// MAZE PATH
// int numways(int sr,int sc,int er,int ec ){
//     if(sr==er && sc==ec){
//         return 1;
//     }
//     if(sc>ec || sr>er){
//         return 0;
//     }
//     return numways(sr+1,sc,er,ec) +numways(sr,sc+1,er,ec);
// }
// int main(){
//     int n;
//     cout<<"Enter ending row: ";
//     cin>>n;
//     int m;
//     cout<<"Enter ending column: ";
//     cin>>m;
//     cout<<numways(0,0,n,m);
// }

// PRINT MAZE PATH
void printpath(int sr,int sc,int er,int ec,string sol){
    if(sc==ec && sr==er){
        cout<<sol<<" ";
        return;
    }
    if(sc>ec || sr>er){
        return;
    }
    printpath(sr,sc+1,er,ec,sol+'R');
    printpath(sr+1,sc,er,ec,sol+'D');
}
int main(){
    int n;
    cout<<"Enter ending row: ";
    cin>>n;
    int m;
    cout<<"Enter ending column: ";
    cin>>m;
    string sol="";
    printpath(0,0,n,m,sol);
}