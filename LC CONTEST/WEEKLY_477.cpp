#include<iostream>
using namespace std;
string nonzero(string str){
        string ans="";
        int i=0;
        while(i<str.size()){
            if(str[i]!='0') ans.push_back(str[i]);
            i++;
        }
        return ans;
    }
long long digsum(int n){
        long long x=0;
        while(n){
            x+=n%10;
            n=n/10;
        }
        return x;
}
int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;
        if(n==0) cout<< 0;
        string str=to_string(n);
        cout<<str<<endl;
        string s=nonzero(str);
        cout<<s<<endl;
        long long mul=stoi(s);
        long long sum=digsum(mul);
        cout<< sum*mul;
}