class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0; 
        int r = nums.size() - 1;
        int mini = INT_MAX;

        while(l <= r){
            int mid = l + (r-l)/2;
            if(r == l+1){
                int m = min(nums[l],nums[r]);
                mini = min(m,mini);
                break;
            }
            mini = min(nums[mid], mini);
            if(nums[mid] > nums[r] ){
                l = mid+1;
            }
            else if(nums[mid] < nums[l]){
                r = mid;
            }
            else{
                r = mid -1; 
            } 
        }
        return mini;
    }
};
