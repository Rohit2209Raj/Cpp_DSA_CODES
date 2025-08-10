class Solution {
    public:
        int minTimeToReach(vector<vector<int>>& v) {
            int n=v.size();
            int m=v[0].size();
            int t=0;
            int s=0;
            int i=0;
            int j=0;
            while(i<n && j<m){
                if(v[i][j+1]<=v[i+1][j]){
                    if(v[i][j+1]<=t){
                        if(s==0){
                            t+=1;
                            s=1;
                        }
                        else{
                            t+=2;
                            s=0;
                        }
                    }
                    else{
                        t+=v[i][j+1]-t;
                        if(s==0){
                            t+=1;
                            s=1;
                        }
                        else{
                            t+=2;
                            s=0;
                        }
                    }
                    j++;
                }
    
                else{
                    if(v[i+1][j]<=t){
                        if(s==0){
                            t+=1;
                            s=1;
                        }
                        else{
                            t+=2;
                            s=0;
                        }
                    }
                    else{
                        t+=v[i+1][j]-t;
                        if(s==0){
                            t+=1;
                            s=1;
                        }
                        else{
                            t+=2;
                            s=0;
                        }
                    }
                    j++;
                }
                if(i==n-1 && j==m-1) break;
            }
            return t;
    
        }
    };