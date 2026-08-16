class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]]++;
        }

        vector<pair<int,int>> a;
        for(auto& [num,freq] : seen){
            a.push_back({freq,num});
        }
        sort(a.begin(),a.end());

        vector<int> ans;
        for(int i = a.size() - 1; i >= 0; i--){
            ans.push_back(a[i].second);
            if(ans.size() == k) break;
        }
        return ans;
    }
};
