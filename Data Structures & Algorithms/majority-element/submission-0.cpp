class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int ans = INT_MIN;
        for(auto& num : nums){
            if(freq[num] > nums.size()/2){
                ans = num;
                break;
            } 
        }
        return ans; 
    }
};