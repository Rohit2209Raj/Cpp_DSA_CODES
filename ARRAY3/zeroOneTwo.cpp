#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int > v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int num0=0;
    int num1=0;
    int num2=0;
    for(int i=0;i<=v.size()-1;i++){
        if(v[i]==0) num0++;
        else if(v[i]==1) num1++;
        else num2++;
    }

    for(int i=0;i<=num0-1;i++){
        v[i]=0;
    }
    for(int i=0;i<=num1-1;i++){
        v[i+num0]=1;
    }
    for(int i=0;i<=num2-1;i++){
        v[i+(num0 + num1)]=2;
    }
     

     for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }

}
