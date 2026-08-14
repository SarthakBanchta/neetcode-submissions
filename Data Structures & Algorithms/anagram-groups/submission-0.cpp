class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() <= 1) return {strs};
        unordered_map<string,vector<string>> a;

        for(int i = 0; i < strs.size(); i++){
            string t = strs[i];
            sort(t.begin(),t.end());
            a[t].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& pair : a){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
