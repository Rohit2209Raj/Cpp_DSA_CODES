#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"enter your number of rows : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    // for(ch='A';ch<=char(n+64);ch++){
    //     cout<<ch;
    // }
    // cout<<endl;
    // }



    // Method-2

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(j+64);  // TYPECASTING
        }
        cout<<endl;
    }

}