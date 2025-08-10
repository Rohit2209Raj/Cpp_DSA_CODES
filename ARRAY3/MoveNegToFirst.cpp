#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(-1);
    v.push_back(23);
    v.push_back(2); 
    v.push_back(-89);
    v.push_back(-6); 
    v.push_back(3);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]<0) i++;
        if(v[j]>=0) j--;
        else if(v[i]>=0 && v[j]<0) {
            swap(v[i],v[j]);
            i++;
            j--;
    }
    }

   for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}

