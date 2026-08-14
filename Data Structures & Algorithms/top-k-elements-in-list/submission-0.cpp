class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]]++;
        }
        vector<pair<int,int>> a;
        a.reserve(seen.size());
        for(auto& [num,freq] : seen){
            a.push_back({freq,num});
        }
        sort(a.begin(),a.end());
        vector<int> ans;
        int i = a.size() - 1;
        while(ans.size() != k){
            ans.push_back(a[i].second);
            i--;
        }
        return ans;
    }
};
