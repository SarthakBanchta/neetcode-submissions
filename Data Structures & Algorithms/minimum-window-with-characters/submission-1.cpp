class Solution {
public:
    string minWindow(string s, string t) {
        int ssize = s.size();
        int tsize = t.size();
        unordered_map<char,int> freq;
        for(int i = 0; i < tsize; i++){
            freq[t[i]]++;
        }
        int startIdx = -1;
        int minLength = INT_MAX;
        int count = 0;
        int l = 0, r = 0;

        while(r < ssize){
            if(freq[s[r]] > 0){
                count++;
            }
            freq[s[r]]--;

            while(count == tsize){
                if(r-l+1 < minLength){
                    minLength = r-l+1;
                    startIdx = l;
                }   

                freq[s[l]]++;
                if(freq[s[l]] > 0) count--;
                l++;
                }
            r++;
        }
        if(minLength == INT_MAX) return "";
        string ans = s.substr(startIdx,minLength);
        return ans;
    }
};
