#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5); // all 5 indexes initialised to 0
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    for(int i=0;i<=v.size()-1;i++) cout<<v[i]<<" ";

    vector<int> v2(5,4); // each elemnt = 4;
   
}
