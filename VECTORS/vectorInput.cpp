#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    } 

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //cout<<v.at(2);

    sort(v.begin(),v.end());

     for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }


   
}