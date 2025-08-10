#include<iostream>
using namespace std;
// int pow(int n,int m){
//     if(m==0)  return 1;
//     else return n*pow(n,m-1);
// }
// int pow(int n,int m){
//     if(m==1) return n;
//     if(m==0) return 1;
//     return pow(n,m/2)*pow(n,m/2);  /// bahut lamba chala jaayega
//                                    /// ye to sala (euler tree),hence use eak hi
// }     
int pow(int n,int m){
    if(m==1) return n;
    if(m==0) return 1;
    int ans=0;
    if(m%2==0){
       ans=pow(n,m/2);
       return ans*ans;
    }
    else{
        ans=pow(n,(m/2)+1)*pow(n,(m/2));
        return ans;
    }
}                                
int main(){
    int n;
    cout<<"enter integer: ";
    cin>>n;
    int m;
    cout<<"enter power: ";
    cin>>m;
    cout<<pow(n,m);
}