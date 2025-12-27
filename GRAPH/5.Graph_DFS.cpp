#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void dfs(int i,vector<int>& visited,vector<int> adj[]){
    if(visited[i]==1) return;
    visited[i]=1;
    cout<<i<<" ";
    for(auto it: adj[i]){
        dfs(it,visited,adj);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(visited[i]==0) dfs(i,visited,adj);
    }
    
}

