class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int position = -1;
        int l = 0;
        int r = nums.size() - 1;
        if(target > nums[r]) return nums.size();
        if(target  < nums[l]) return 0;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                position = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return position;
    }
};