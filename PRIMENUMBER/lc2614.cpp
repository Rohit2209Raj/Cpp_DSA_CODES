#include<vector>
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
bool isprime(int x){
    bool flag=true;
    for(int i=2;i<sqrt(x);i++){
          if(x%i==0){
            flag=false;
            break;
          }
    }
    if(flag==true) return true;
    else return false;
}
int main(){
    vector<vector<int>> arr;
    for(int i=0;i<3;i++){
        vector<int>x(3,0);
        for(int j=0;j<3;j++){
            cout<<"Enter your number: ";
            int g=0;
            cin>>g;
            x[j]=g;
        }
        arr.push_back(x);
    }
    vector<int>diagele;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || j==(arr[0].size()- i-1)){
                //cout<<j<<endl;
                 diagele.push_back(arr[i][j]);
            }
        }
    }
    int maxprime=INT_MIN;
    for(int i=0;i<diagele.size();i++){
          if(isprime(diagele[i])==1) maxprime=max(maxprime,diagele[i]);
    }
    cout<<maxprime;
}