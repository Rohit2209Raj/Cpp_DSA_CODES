#include<iostream>
#include<vector>
using namespace std;

class disjoint{
vector<int>parent,rank;

public:

disjoint(int n){
    parent.resize(n+1,0);
    rank.resize(n+1,0);

    for(int i=0;i<=n;i++) parent[i]=i;
}

void add(int u,int v){
    int pu=reconstruct(u);
    int pv=reconstruct(v);

    if(pu==pv) return;
    if(rank[pu] > rank[pv]) {
        parent[pv]=pu;
    }
    else if(rank[pu]<rank[pv]){
        parent[pu]=pv;
    }
    else{
        parent[pv]=pu;
        rank[pu]++;
    }
}

int reconstruct(int u){
    if(u==parent[u]) return u;

    return parent[u]=reconstruct(parent[u]);
}
bool parfind(int u ,int v){
    int pu=reconstruct(u);
    int pv=reconstruct(v);
    if(pu == pv) return true;
    return false;
}
};

int main(){
    disjoint d(7);
    d.add(1,2);
    d.add(2,3);
    d.add(4,5);
    d.add(6,7);
    d.add(5,6);

    if(d.parfind(1,7)){
        cout<<"same tree";
    }
    else cout<<"Not same tree";
    d.add(3,7);
    cout<<endl;
    if(d.parfind(1,7)){
        cout<<"same tree";
    }
    else cout<<"Not same tree";

}

