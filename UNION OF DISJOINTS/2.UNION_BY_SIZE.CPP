#include<iostream>
#include<vector>
using namespace std;

class disjoint{
vector<int>parent,size;

public:

disjoint(int n){
    parent.resize(n+1,0);
    size.resize(n+1,1);

    for(int i=0;i<=n;i++) parent[i]=i;
}

void add(int u,int v){
    int pu=reconstruct(u);
    int pv=reconstruct(v);

    if(pu==pv) return;
    if(size[pu] > size[pv]) {
        parent[pv]=pu;
        size[pv]+=size[pu];
    }
    else if(size[pu]<size[pv]){
        parent[pu]=pv;
        size[pu]+=size[pv];
    }
    else{
        parent[pv]=pu;
        size[pu]+=size[pv];
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

