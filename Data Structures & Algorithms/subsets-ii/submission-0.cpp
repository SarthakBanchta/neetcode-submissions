class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans, int idx, vector<int>& curr){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[idx]);
        helper(nums,ans,idx+1,curr);
        curr.pop_back();
        while( idx+1 < nums.size() && nums[idx] == nums[idx+1]) idx++;
        helper(nums,ans,idx+1,curr);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        helper(nums,ans,0,curr);
        return ans;
    }
};
