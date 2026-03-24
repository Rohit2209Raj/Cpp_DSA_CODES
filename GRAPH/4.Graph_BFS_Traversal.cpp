#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int ans=0;
void bfs(vector<int>& visited,vector<vector<int>>adj,int i){
    if(visited[i]==1) return;
    ans++;
    queue<int>q;
    q.push(i);
    visited[i]=1;
    while(q.size()){
        int temp=q.front();
        q.pop();
        for(int z=0;z<adj[temp].size();z++){
            if(visited[adj[temp][z]] == 0){
                q.push(adj[temp][z]);
                visited[adj[temp][z]] = 1;
            }
        }
        cout<<temp<<" ";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    for(int i=1;i<visited.size();i++) bfs(visited,adj,i);
    cout<<endl<<"Answer: "<<ans;
}