class Solution {
public:
    int maxArea(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int maxi = INT_MIN;
        while(start < end){
            int curr = abs(end - start)*min(nums[start],nums[end]);
            if(curr > maxi) maxi = curr;
            if(nums[start] > nums[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return maxi;
    }
};
