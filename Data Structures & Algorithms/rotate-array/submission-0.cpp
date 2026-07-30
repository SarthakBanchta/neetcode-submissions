class Solution {
public:
    vector<int> r(vector<int> nums){
        int last = nums[nums.size()-1];

        vector<int> ans;
        ans.push_back(last);
        for(int i = 0; i < nums.size() - 1; i++){
            ans.push_back(nums[i]);
        }
        
        return ans;
    }
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++){
            vector<int> ans = r(nums);
            nums = ans;
        }
    }
};