#include<iostream>
#include<stack>
using namespace std;
int main(){
        int arr[]={1,3,-1,-3,5,3,6,7};
        int n=sizeof(arr)/sizeof(arr[0]);
        // next greater index
        stack<int>st;
        st.push(n-1);
        int ngi[n];
        ngi[n-1]=n;
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]<arr[i])st.pop();
            if(st.size()==0){
                ngi[i]=n;
            }
            else{
                ngi[i]=st.top();
            }
            st.push(i);
        }

        for(int i=0;i<n;i++) cout<<ngi[i]<<" ";
}