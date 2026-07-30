class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() <= 1) return false;
        int l = 0;
        int r = 1;
        while(l < nums.size()-1){
            if(r == nums.size()){
                l++;
                r=l+1;
                if (r >= nums.size()) break;
            }
            if(nums[l] == nums[r] && abs(l-r) <= k) return true;
            r++;
        }
        return false;
    }
};