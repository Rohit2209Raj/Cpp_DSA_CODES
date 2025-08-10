#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,3,2,4,1};
    vector<int>v;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    /*TIME COMPLEXITY OF INTERNAL SORTING IS O(nlogn) --> best*/
    //sort(v.end(),v.begin()); // WILL GIVE ERROR AS THIS STATE THAT  (STARTING IDX,ENDING IDX);
    for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
    }
}