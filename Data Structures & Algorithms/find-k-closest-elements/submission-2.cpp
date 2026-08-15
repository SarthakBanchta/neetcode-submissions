class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> p;
        for(auto& num : arr){
            p.push({abs(num-x),num});
            if(p.size() > k){
                p.pop();
            }
        }
        vector<int> res;

        while(!p.empty()){
            res.push_back(p.top().second);
            p.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};