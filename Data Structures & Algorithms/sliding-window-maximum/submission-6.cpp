class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size() == 0) return {};
        deque<int> dq;
        int i = 1;
        dq.push_back(0);
        vector<int> ans;

        while(i < k){
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            i++;
        }

        while(i < nums.size()){
            ans.push_back(nums[dq.front()]);
            if(!dq.empty() && dq.front() < i - k + 1){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            i++;
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};
