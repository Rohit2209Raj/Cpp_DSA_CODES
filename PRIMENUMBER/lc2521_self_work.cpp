// class Solution {
//     public:
//         bool isprime(int n){
//             if(n<=1) return false;
//             for(int i=2;i<n;i++){
//                 if(n%i==0) return false;
//             }
//             return true;
//         }
//         int distinctPrimeFactors(vector<int>& nums) {
//             int max=INT_MIN;
//             for(int i=0;i<nums.size();i++){
//                 if(nums[i]>max)max=nums[i];
//             }
//             vector<int>maxprime;
//             for(int i=2;i<=max;i++){
//                 if(isprime(i)) maxprime.push_back(i);
//             }
//             vector<int>v2(maxprime.size(),0);
//             for(int i=0;i<maxprime.size();i++){
//                 for(int j=0;j<nums.size();j++){
//                     if(nums[j]%maxprime[i]==0){
//                         v2[i]=1;
//                     }
//                 }
//             }
//             int count=0;
//             for(int i=0;i<v2.size();i++) if(v2[i]==1) count++;
//             return count;
//         }
//     };