class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int res = 0;
      int l = 0;
      unordered_set<char> seen;

      for(int r = 0; r < s.size(); r++){
        while(seen.find(s[r]) != seen.end()){
            seen.erase(s[l]);
            l++;
        }
        seen.insert(s[r]);
        res = max(r-l+1,res);
      }
      return res;
    }
};
