#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
    int ipdx(int n,vector<int>v,int i){
        for(int j=i-1;j>=0;j--){
            if(v[j]==n) return j;
        }
        return -1;
    }
    int indx(int n,vector<int>v,int i){
        
        for(int j=i+1;j<v.size()-1;j++){
            if(v[j]==n) return j;
        }
        return -1;
    }
int main(){
        vector<int>v={9,0};
        int n=v.size();
        int area;
        int maxarea=INT_MIN;
        vector<int>a(n);
        a[n-1]=n;
        stack<int>ast;
        int idx;
        ast.push(v[n-1]);
        for(int i=n-2;i>=0;i--){
            while(ast.size()>0 && ast.top()>v[i]) ast.pop();
            if(ast.size()==0){
                a[i]=n;
                ast.push(v[i]);
            }
            else{
                idx=indx(ast.top(),v,i);
                a[i]=idx;
                ast.push(v[i]);
            }
        }

        vector<int>b(n);
        b[0]=-1;
        stack<int>bst;
        bst.push(v[0]);
        for(int i=1;i<n;i++){
            while(bst.size()>0 && bst.top()>v[i]) bst.pop();
            if(bst.size()==0){
                b[i]=-1;
                bst.push(v[i]);
            }
            else{
                idx=ipdx(bst.top(),v,i);
                b[i]=idx;
                bst.push(v[i]);
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }

        for(int i=0;i<n;i++){
            area=v[i]*(a[i]-b[i]-1);
            maxarea=max(maxarea,area);
        }
        cout<<endl;
        cout<<"Maxarea= "<<maxarea;
}