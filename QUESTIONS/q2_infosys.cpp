#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <map>
#include<set>
using namespace std;
bool check(int n){
    int x=sqrt(n);

    return x*x == n;

}
long long count(vector<int>& temp){
    long long count=0;
    for(int i=0;i<temp.size();i++){
        for(int j=i+1;j<temp.size();j++){
            if( check(temp[i]*temp[j]) ) count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>v;

    // v.push_back(0);

    cout<<"Enter values of arr: ";

    for(int i=0;i<n;i++) {
        int z;
        cin>>z;
        v.push_back(z);
    }

    int p;
    cout<<"Enter P: ";
    cin>>p;

    int q;
    cout<<"Enter q: ";
    cin>>q;

    int col;
    cout<<"Enter q columns: ";
    cin>>col;

    vector<vector<int>>grid(q,vector<int>(col));

    cout<<"Enter gird values: ";

    for(int i=0;i<q;i++){
        for(int j=0;j<col;j++){
            int x;
            cin>>x;
            grid[i][j]=x;
        }
    }






}