class Solution {
public:
    void helper(vector<int>& candidates, int target,int ind,vector<int> curr,vector<vector<int>>& res){
        if(target == 0){
            res.push_back(curr);
            return;
        }
        if(target < 0 || candidates.size() == ind) return;

        curr.push_back(candidates[ind]);
        helper(candidates,target-candidates[ind], ind+1,curr,res);
        curr.pop_back();
        while(ind + 1 < candidates.size() && candidates[ind] == candidates[ind+1]) ind++;
        helper(candidates,target, ind+1,curr,res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        helper(candidates,target,0,{},res);
        return res;
    }
};
