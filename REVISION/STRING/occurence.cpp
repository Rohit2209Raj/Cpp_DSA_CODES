#include<iostream>
using namespace std;
int main(){
    string s="leetcode";
    int n=s.size();
    int arr[26]={0};
    int i=0;
    while(s[i]!='\0'){
        arr[int(s[i]-97)]++;
        i++;
    }
    // for(int i=0;i<26;i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<endl;
    int maxele=-1;
    int max=-100;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            maxele=i;
        }
    }
    cout<<(char)(maxele+97);

}