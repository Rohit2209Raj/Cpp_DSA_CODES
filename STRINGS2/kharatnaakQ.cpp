#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="rohitrajisfromcsebranch";
    int n=s.size();
    cout<<n<<endl;
    int arr[26]={0};
   cout<<(int)s[4]<<endl;
    // cout<<arr[5];
    for(int i=0;s[i]!='\0';i++){
          arr[(int)s[i]-97]++;
          //arr[i]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
         if(arr[i]>arr[i-1] && arr[i]>arr[max]) max=i;
    }
    cout<<endl;
    cout<<max<<endl;
    cout<<(char)(max+97);

}
