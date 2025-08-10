// seive of erathothenesis
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    bool flag=true;
    if(n<=1) return 0;
    for(int i=2;i<sqrt(n);i++){
        //cout<<i<<endl;
        if(n%i==0){
            cout<<i<<endl;
            flag=false;
            cout<<"not prime";
            break;
        }
    }
    if(flag==true) cout<<"Prime";
}