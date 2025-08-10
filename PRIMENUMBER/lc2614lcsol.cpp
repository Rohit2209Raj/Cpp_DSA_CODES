// class Solution {
//     public:
//         bool isprime(int x){
//             if(x<=1) return false;
//         bool flag=true;
//         for(int i=2;i<=sqrt(x);i++){
//               if(x%i==0){
//                 flag=false;
//                 break;
//               }
//         }
//         if(flag==true) return true;
//         else return false;
//     }
//         int diagonalPrime(vector<vector<int>>& nums) {
//         vector<int>diagele;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i==j || j==(nums[0].size()- i-1)){
//                      diagele.push_back(nums[i][j]);
//                 }
//             }
//         }
//         int maxprime=0;
//         for(int i=0;i<diagele.size();i++){
//               if(isprime(diagele[i])==1) maxprime=max(maxprime,diagele[i]);
//         }
//         return maxprime;
    
            
//         }
//     };