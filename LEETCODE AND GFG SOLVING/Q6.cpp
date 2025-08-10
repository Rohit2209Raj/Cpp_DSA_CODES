//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int scount=0;
        int dcount=0;
        bool flag=true;
        if(n=>m){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i]==b[j]){
                        flag=false;
                        break;
                    }
                    else continue;
                }
                if(flag==false) scount++;
                else dcount++;
            }
        }
        
        // else{
        //     for(int i=0;i<m;i++){
        //         for(int j=0;j<n;j++){
        //             if(a[i]==b[j]) {
        //                 flag=false;
        //                 break;
        //             }
        //         }
        //         if(flag==false) scount++;
        //         else dcount++;
        //     }
        // }
        
        
        return scount+dcount;
    }
};

/