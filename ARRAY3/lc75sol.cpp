class Solution {
public:
   void sortColors(vector<int>& nums) {
    int num0=0;
    int num1=0;
    int num2=0;
    for(int i=0;i<=nums.size()-1;i++){
        if(nums[i]==0) num0++;
        else if(nums[i]==1) num1++;
        else num2++;
    }
    for(int i=0;i<=num0-1;i++){
        nums[i]=0;
    }
    for(int i=0;i<=num1-1;i++){
        nums[i+num0]=1;
    }
    for(int i=0;i<=num2-1;i++){
        nums[i+(num0+num1)]=2;
    }
     
        
    }
};