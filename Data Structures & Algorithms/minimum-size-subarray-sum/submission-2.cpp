class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int l  = 0 ;
        int sum = 0;
        int r = 0;

        while(r < nums.size()){
            sum += nums[r];
            while(sum >= target){
                cout<<sum<<endl;
                res = min(res,r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        if(res == INT_MAX ) return 0;
        return res;
    }
};