// USING LIST
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<pair<int,int>>adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         adj[u].push_back({v,w});
//         adj[v].push_back({u,w});
//     }
// }

// MATRIX REPRESENTATION
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][n+1]={0};
    for(int i=0;i<m;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj[v][u]=w;
    }
}