#include<iostream>
using namespace std;
// same as fibo series after 1st term //
int stair(int n){
    if(n<=1) return 1;
    if(n==2) return 2;
    else return stair(n-1)+stair(n-2); // BREAKING QUESTION USING RECCURSION///
}
int main(){
    int n;
    cout<<"enter number of stairs: ";
    cin>>n;
    cout<<stair(n);
}
// CONCEPT  HAI KI QUESTION KO TODO CHOTE HISSO ME USING RESSUCRSION////