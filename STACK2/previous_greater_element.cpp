#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n=8;
    int arr[n]={3,1,2,5,4,6,2,3};
    int ans[n];
    ans[0]=-1;
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";

}