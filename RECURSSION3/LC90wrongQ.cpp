// class Solution {
//     public:
//         void helper(vector<int>& nums, vector<vector<int>>& final, vector<int> ans,
//                     int idx) {
//             if (idx == nums.size()) {
//                 final.push_back(ans);
//                 return;
//             }
//             bool flag = true;
//             if (idx > 0)
//                 if (nums[idx] == nums[idx - 1])
//                     flag = false;
    
//             int x = nums[idx];
//             if (flag == true) {
//                 helper(nums, final, ans, idx + 1);
//                 ans.push_back(x);
//                 helper(nums, final, ans, idx + 1);
//             } else {
//                 helper(nums, final, ans, idx + 1);
//             }
//         }
//         vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//             vector<int> ans;
//             vector<vector<int>> final;
//             int idx;
//             helper(nums, final, ans, 0);
//             return final;
//         }
//     };