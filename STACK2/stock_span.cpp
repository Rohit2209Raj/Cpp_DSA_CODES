#include<iostream>
#include<stack>
using namespace std;
int idxof(int n,int arr[],int i){
    //int n=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<i;j++){
        if(arr[j]==n) return j;
    }

}
int main(){
    int n=6;
    int arr[n]={10,6,8,5,11,9};
    stack<int>st;
    int ans[n];
    ans[0]=1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        int idx=-1;
        while( st.size()>0 && st.top()<arr[i]) st.pop();
        idx=i-idxof(st.top(),arr,i);
        ans[i]=idx;
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}