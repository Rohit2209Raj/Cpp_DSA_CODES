#include<iostream>
#include<math.h>
#include<vector>
#include<climits>
#include<string>
using namespace std;
// void print_Path(string &sol,int ec,int er,int sc=0,int sr=0){
//     //cout<<"Entering with sol= "<<sol<<" sc= "<<sc<<" sr= "<<sr<<endl;
//     if(sc==ec && sr==er) {
//         cout<<sol<<endl;
//         return;
//     }
//     if(sc>ec || sr>er) return;
//     sol.push_back('R');
//     print_Path(sol,ec,er,sc+1,sr);
//     sol.pop_back();
//     sol.push_back('D');
//     print_Path(sol,ec,er,sc,sr+1);
//     sol.pop_back();

// }
// int main(){
//     int ec,er;
//     string sol="";
//     cout<<"Enter ending column: ";
//     cin>>ec;
//     cout<<"Enter ending row: ";
//     cin>>er;
//     print_Path(sol,ec,er);
// }
// int num_path(int ec,int er,int sc=0,int sr=0){
//     if(sc==ec && sr==er) {
//         return 1;
//     }
//     if(sc> ec || sr>er) return 0;
//     return num_path(ec,er,sc+1,sr)+num_path(ec,er,sc,sr+1);
// }
// int main(){
//     int ec,er;
//     string sol="";
//     cout<<"Enter ending column: ";
//     cin>>ec;
//     cout<<"Enter ending row: ";
//     cin>>er;
//     cout<<num_path(ec,er);
// }

// void print_Path_D(string &sol,int ec,int er,int sc=0,int sr=0){
//     //cout<<"Entering with sol= "<<sol<<" sc= "<<sc<<" sr= "<<sr<<endl;
//     if(sc==ec && sr==er) {
//         cout<<sol<<endl;
//         return;
//     }
//     if(sc>ec || sr>er) return;
//     sol.push_back('R');
//     print_Path_D(sol,ec,er,sc+1,sr);
//     sol.pop_back();
//     sol.push_back('D');
//     print_Path_D(sol,ec,er,sc,sr+1);
//     sol.pop_back();
//     sol.push_back('X');
//     print_Path_D(sol,ec,er,sc+1,sr+1);
//     sol.pop_back();

// }
// int main(){
//     int ec,er;
//     string sol="";
//     cout<<"Enter ending column: ";
//     cin>>ec;
//     cout<<"Enter ending row: ";
//     cin>>er;
//     print_Path_D(sol,ec,er);
// }

// void printPath(string &sol,int arr[][3],int ec,int er,int sc=0,int sr=0){
//     if(sc==ec && sr==er){
//         cout<<sol<<endl;
//         return;
//     }
//     if(sc>ec || sr>er) return;
//     if(arr[sr][sc]==0) return;
//     sol.push_back('R');
//     printPath(sol,arr,ec,er,sc+1,sr);
//     sol.pop_back();
//     sol.push_back('D');
//     printPath(sol,arr,ec,er,sc,sr+1);
//     sol.pop_back();
// }
// int main(){
//     //cout<<"heLLO rohit";
//     int arr[][3]={{1,1,1},{1,0,1},{1,1,1}};
//     int sc=0,sr=0,ec=2,er=2;
//     string sol="";
//     printPath(sol,arr,ec,er);
// }

// void printPath(string &sol,int arr[][3],int ec,int er,int sc=0,int sr=0){
//     if(sc==ec && sr==er){
//         cout<<sol<<endl;
//         return;
//     }
//     if(sc>ec || sr>er) return;
//     if(arr[sr][sc]==0) return;
//     sol.push_back('R');
//     printPath(sol,arr,ec,er,sc+1,sr);
//     sol.pop_back();
//     sol.push_back('D');
//     printPath(sol,arr,ec,er,sc,sr+1);
//     sol.pop_back();
// }
// int main(){
//     //cout<<"heLLO rohit";
//     int arr[][3]={{1,1,1},{1,0,1},{1,1,1}};
//     int sc=0,sr=0,ec=2,er=2;
//     string sol="";
//     printPath(sol,arr,ec,er);
// }
// Q7. Minimum Cost Path in Weighted Maze

/*
weighted_maze = [
    [1, 3, 1, 2, 4],
    [2, 5, 3, 1, 2],
    [4, 1, 2, 6, 3],
    [1, 3, 5, 2, 1],
    [2, 4, 1, 3, 2]
]
*/

// void printPath(string &sol,int arr[][5],int ec,int er,int sc=0,int sr=0,int count=0,int mincount=INT_MAX){
//     if(sc==ec && sr==er){
//         mincount=min(count,mincount);
//         cout<<mincount<<endl;
//     }
//     if(sc>ec || sr>er) return;
//     sol.push_back('R');
//     count+=arr[sr][sc+1];
//     printPath(sol,arr,ec,er,sc+1,sr,count,mincount);
//     sol.pop_back();
//     count+=arr[sr+1][sc];
//     sol.push_back('D');
//     printPath(sol,arr,ec,er,sc,sr+1,count,mincount);
//     sol.pop_back();
// }
int count_path(int arr[][5],int er,int ec,int sr=0,int sc=0){
    if(sr==er && sc==ec) return arr[sr][sc];
    if(sr>er || sc>ec) return INT_MAX;
    return arr[sr][sc]+min(count_path(arr,er,ec,sr+1,sc),count_path(arr,er,ec,sr,sc+1));
}
int main(){
    int arr[][5]={{1,3,1,2,4},{2,5,3,1,2},{4,1,2,6,3},{1,3,5,2,1},{2,4,1,3,2}};
    int sc=0,sr=0,ec=4,er=4;
    cout<<count_path(arr,er,ec);
}

