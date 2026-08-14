class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int l = 0;
        int r = 0;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            curr += nums[r];
            maxi = max(maxi,curr);
            if(curr < 0){
                l = r + 1;
                r++;
                curr = 0;
                continue;
            }
            r++;
        }
        return maxi;
    }
};
