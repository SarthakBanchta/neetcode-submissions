class Solution {
public:
    void helper(vector<int>& nums,int target,int ind,vector<vector<int>>& res,vector<int> curr){
        if(target == 0){
            res.push_back(curr);
            return;
        }  
        for(int i = ind; i < nums.size(); i++){
            if(nums[i] > target) break;
            curr.push_back(nums[i]);
            helper(nums,target - nums[i],i,res,curr);
            curr.pop_back();
            
        }

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        helper(nums,target,0,res,{});
        return res;
    }
};
