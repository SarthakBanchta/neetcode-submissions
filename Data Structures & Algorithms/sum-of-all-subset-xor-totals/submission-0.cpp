class Solution {
public:
    int helper(vector<int>& nums, int ind, int ans){
        if(ind == nums.size()){
            return ans;
        }
        return helper(nums,ind+1, ans^nums[ind]) + helper(nums,ind+1,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        return helper(nums, 0, 0);
        
    }
};