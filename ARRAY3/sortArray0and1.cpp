#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1); 
    v.push_back(0);
    v.push_back(0); 
    v.push_back(1);
    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // sort(v.begin(),v.end());

    int k=0;
    int j=v.size()-1;
    while(k<=j){
        if(v[j]==1) j--;
        if(v[k]==0) k++;
        if(k>j) break;
        if(v[k]==1 && v[j]==0){
             swap(v[k],v[j]);
             k++;
             j--;
             }
    }

    // int no0=0;
    // int no1=0;
    // for(int i=0;i<=v.size()-1;i++){
    //     if(v[i]==0) no0++;
    //     else no1++;
    // }
    // cout<<no0<<endl;
    // cout<<no1<<endl;

    //  for(int i=0;i<=v.size()-1;i++){
    //     if(i<=no0-1) v[i]=0;
    //     else v[i]=1;
    //  }
    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
