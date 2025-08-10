#include<iostream>
#include<string>
using namespace std;
int main(){
    //    int arr[5]={1,2,3,4,5};
    //    cout<<to_string(12345);
    int n;
    cin>>n;
    int count=0;
    string s=to_string(n);
    for(int i=0;s[i]!='\0';i++){
        count ++;
    }
    cout<<count;
}