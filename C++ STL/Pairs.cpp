#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={1,5};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair<int,pair<int,int>>q={1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
    cout<<endl;
    pair<int,int>arr[]={{1,2},{1,3},{1,4}};
    for(int i=0;i<3;i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}