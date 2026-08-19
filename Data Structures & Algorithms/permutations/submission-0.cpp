class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> t = nums;
        vector<vector<int>> ans;
        ans.push_back(t);
        next_permutation(nums.begin(),nums.end());
        while(t != nums){
            ans.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return ans;
    }
};
