// class Solution {
//     public:
//         vector<vector<int>> generate(int numRows) {
//             vector<vector<int>>v;
//            for(int i=1;i<=numRows;i++){
//             vector<int>a(i);
//             v.push_back(a);
//         }
//         for(int i=0;i<=v.size()-1;i++){
//             for(int j=0;j<=i;j++){
//                    if(i==j || j==0) v[i][j]=1;
//                    else{
//                     v[i][j]=v[i-1][j]+v[i-1][j-1];
//                    }
//             }
//         }
    
//             return v;
//         }
//     };