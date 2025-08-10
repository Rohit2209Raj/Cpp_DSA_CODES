#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
   vector<string>v={"0123","234","999","0000"};
   int max=INT_MIN;
   for(int i=0;i<v.size();i++){
       if(stoi(v[i])>max) max=i;
   }
   cout<<max;
}