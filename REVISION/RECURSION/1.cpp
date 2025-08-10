#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

// // Stair case

// int stairs(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n<1) return 0;
//     else return stairs(n-1) + stairs(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter number of stairs: ";
//     cin>>n;
//     cout<<stairs(n);
// }

// maze  path
// void maze_print(int sr,int sc,string sol){
//      if(sr==0 && sc==0){
//         cout<<sol<<endl;
//         return;
//      }
//      if(sr<0 || sc<0) return;
//     sol.push_back('U');
//     //  sol+'U';
//      maze_print(sr-1,sc,sol);
//      sol.pop_back();
//     sol.push_back('L');
//     //  sol+'L';
//      maze_print(sr,sc-1,sol);
//      sol.pop_back();
// }


// void maze_print(int sr,int sc,string &sol){
//     if(sr==0 && sc==0){
//         cout<<sol<<endl;
//         return;
//     }
//     if(sc<0 || sr<0) return;
//     sol.push_back('U');
//     maze_print(sr-1,sc,sol);
//     sol.pop_back();
//     sol.push_back('L');
//     maze_print(sr,sc-1,sol);
//     sol.pop_back();
// }
// int main(){
//     int sr;
//     cout<<"Enter target row: ";
//     cin>>sr;
//     int sc;
//     cout<<"Enter target column: ";
//     cin>>sc;
//     string sol="";
//     maze_print(sr,sc,sol);
// }


// Tower Of Hanoi
// void hanoi(int n,int start,int help ,int dest){
//       if(n==1) {
//         cout<<start<<" -> "<<dest<<endl;
//         return;
//     }
//       hanoi(n-1,start,dest,help);
//       //cout<<start<<"->"<<dest;
//       hanoi(1,start,help,dest);
//       //cout<<endl;
//       hanoi(n-1,help,start,dest);
// }
// void hanoi(int n,int start,int help,int end){
//     if(n==1){
//         cout<<start<<" -> "<<end<<endl;
//         return;
//     }
//     hanoi(n-1,start,end,help);
//     hanoi(1,start,help,end);
//     hanoi(n-1,help,start,end);
// }
// int main(){
//     int n;
//     cout<<"Enter number of rings: ";
//     cin>>n;
//     hanoi(n,1,2,3);
// }

// max value in array
// int maxele(int arr[],int idx,int n,int max){
//     if(idx==n)return max;
//     if(arr[idx]>max) max=arr[idx];
//     return maxele(arr,idx+1,n,max);
// }
// void maxele(int arr[],int idx,int n,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(arr[idx]>max) max=arr[idx];
//     maxele(arr,idx+1,n,max);
// }
// int main(){
//     int arr[]={3,1,7,4,0,9,4,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//    // cout<<maxele(arr,0,n,INT_MIN);
//    maxele(arr,0,n,INT_MIN);
// }

// skip a char
// void skp(string str,int idx,string sol){
//     if(idx==str.size()){
//         cout<<sol<<endl;
//         return;
//     }
//     char c=str[idx];
//     if(c=='r'){
//         skp(str,idx+1,sol);
//     }
//     else skp(str,idx+1,sol+c);
// }
// void skp(string str,int idx,string sol){
//     if(idx==str.size()){
//         cout<<sol<<endl;
//         return;
//     }
//     char ch=str[idx];
//     if(ch=='r') skp(str,idx+1,sol);
//     else skp(str,idx+1,sol+ch);
// }
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;
//     skp(str,0,"");
// }

// SUBSETS 
//BAHUT IMPORTANT CODE HAI YE YAAR;
// void  subsets(string str,string sol,int idx){
//     if(idx==str.size()){
//         cout<<sol<<endl;
//         return;
//     }
//     char ch=str[idx];
//     subsets(str,sol+ch,idx+1);
//     subsets(str,sol,idx+1);
// }
// void subsets(string str,vector<char>sol,int idx,vector<vector<char>>&v){
//     if(idx==str.size()){
//         v.push_back(sol);
//         return;
//     }
//     char ch=str[idx];
//     subsets(str,sol,idx+1,v);
//     sol.push_back(ch);
//     subsets(str,sol,idx+1,v);
// }
// int main(){
//     string str;
//     getline(cin,str);
//     //cout<<str<<endl;
//     vector<char>sol;
//     vector<vector<char>>v;
//     subsets(str,sol,0,v);
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             cout<<v[i][j];
//         }
//         cout<<endl;
//     }
// }

// Subsets woth duplicatess
void dupsub(string str,string sol,int idx){
    if(idx==str.size()){
        cout<<sol<<endl;
        return;
    }
    bool flag=true;
    if(idx>0) if(str[idx]==str[idx-1]) flag=false;
    char ch=str[idx];
    if(flag==true){
        dupsub(str,sol+ch,idx+1);
        dupsub(str,sol,idx+1);
    }
    else dupsub(str,sol,idx+1);
}
int main(){
    string str;
    cout<<"Enter your string: ";
    getline(cin,str);
    dupsub(str,"",0);
         
    
    
}







