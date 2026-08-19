class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& res, int ind,vector<int> curr){
        if(ind == nums.size()){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[ind]);
        helper(nums,res,ind+1,curr);
        curr.pop_back();
        helper(nums,res,ind+1,curr);
        return;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        helper(nums,res,0,{});
        return res;
    }
};
