#include<iostream>
#include<vector>
using namespace std;
// int fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int combination(int n,int r){
//     int combination=fact(n)/(fact(r)*fact(n-r));
//     return combination;
// }
int main(){
    vector< vector<int> >v;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    for(int i=0;i<=v.size()-1;i++){
        for(int j=0;j<=i;j++){
               if(i==j || j==0) v[i][j]=1;
               else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
               }
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    

}