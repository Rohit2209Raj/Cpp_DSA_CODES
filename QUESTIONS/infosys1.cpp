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

    vector<int>par,val;
    cout<<"Enter parent vector: ";

    for(int i=0;i<n;i++) {
        int z;
        cin>>z;
        par.push_back(z);
    }

    cout<<"Enter val vector: ";

    for(int i=0;i<n;i++) {
        int z;
        cin>>z;
        val.push_back(z);
    }

    long long sum=0;

    for(int i=par.size()-1;i>=0;i--){
        set<int>s;

        vector<int>temp;

        s.insert(i+1);
        temp.push_back(val[i]);

        for(int j=i+1;j<n;j++){
            if(s.find(par[j]) != s.end()){
                s.insert(j+1);
                temp.push_back(val[j]);
            }
        }

        if(temp.size() > 1) {
            sum+=count(temp);
            cout<<i<<"  "<<sum<<endl;
        }


        

    }

    cout<<sum<<endl;
}