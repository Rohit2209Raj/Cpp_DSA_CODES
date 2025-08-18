#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v;
    // vector<pair<int,int>>v2;
    // v2.push_back({1,2});

    // vector<int>v3(5,100);
    // for(int i=0;i<5;i++)
    // cout<<v3[i]<<" ";
    // cout<<endl;
    // vector<int>vc(v3);
    // for(int i=0;i<5;i++)
    // cout<<vc[i]<<" ";
    // cout<<endl;

    // vector<vector<int>>vp(5,vector<int>(5,1));
    // for(int i=0;i<vp.size();i++) {
    //     for(int j=0;j<vp[i].size();j++) {
    //         cout<<vp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //vector<int>v={1,2,3,4,5,6,7,8,9,10};


    // vector<int>::iterator it=v.begin();
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<endl;
    // }

    //  V.begin()-->refers to first element of vector
    // V.end()-->refers to null space after last element
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    // for(auto it:v) cout<<it<<" ";
    // cout<<endl;
    // auto it=v.end();
    // cout<<*(it)<<" ";

    // cout<<v.back(); // reference to last ele of vector



    //  ERASE

    vector<int>v={10,20,30,40,50};
    for(auto i: v) cout<<i<<" ";
    cout<<endl;
    v.erase(v.begin());
    for(auto i: v) cout<<i<<" ";
    cout<<endl;





        


}