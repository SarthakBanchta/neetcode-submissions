class Solution {
public:
    int characterReplacement(string s, int k) {
        /// replacement needed = windows size - count of max element


        int res = 0;
        unordered_map<char, int> count; 
        int l = 0;          // Left pointer of the window
        int maxf = 0;       // Max frequency of any single char seen in window

        for (int r = 0; r < s.size(); r++) {
            // Expand window by including s[r]
            count[s[r]]++;
            
            // Update maxf if s[r] created a new frequency peak
            maxf = max(maxf, count[s[r]]);
            
            // If window is invalid shrink from the left
            while ((r - l + 1) - maxf > k) {
                count[s[l]]--; 
                l++;
            }
            
            // Record the largest valid window size
            res = max(res, r - l + 1);
        }
        return res;
    }
};
