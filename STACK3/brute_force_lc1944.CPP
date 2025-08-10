// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& v) {
//             int n=v.size();
//             vector<int>sol(n);
//             sol[n-1]=0;
//             for(int i=0;i<n-1;i++){
//                 int count=0;
//                 int mid=INT_MIN;
//                 for(int j=i+1;j<n;j++){
//                     if(v[i]>v[j]){
//                         if(mid<v[j]){
//                             count++;
//                         }
//                         mid=max(mid,v[j]);
//                     }
//                     else{
//                         count++;
//                         break;
//                     }
//                 }
//                 sol[i]=count;
            
//             }
//             return sol;
//     }
// };