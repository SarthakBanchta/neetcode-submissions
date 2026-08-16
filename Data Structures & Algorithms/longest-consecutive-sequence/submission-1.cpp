class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> num(nums.begin(),nums.end());

        int longest = 1;
        for(auto& n : num){
            if(num.find(n-1) == num.end()){
                int l = 1;
                while(num.find(n+l) != num.end()){
                    l++;
                }
                longest = max(longest,l);
            }
        }
        return longest;
    }
};
