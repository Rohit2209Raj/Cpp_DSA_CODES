#include<iostream>
#include<vector>
using namespace std;

bool print(vector<int>& nums,vector<int>& temp,int target,int idx){
    if(idx == nums.size()) {
        if(target == 0){
            for(auto ele:temp) cout<<ele<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }

    temp.push_back(nums[idx]);
    target-=nums[idx];
    if(print(nums,temp,target,idx+1)) return true;
    temp.pop_back();
    target+=nums[idx];
    if(print(nums,temp,target,idx+1)) return true;

    return false;
}
int main(){
    vector<int>nums={1,2,1};
    int target = 3;
    vector<int> temp;

   print(nums,temp,target,0);

}