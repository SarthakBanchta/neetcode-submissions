class Solution {
public:
    bool check(string word1, string word2, unordered_map<char,int>& ord){
        int n = word1.size();
        int m = word2.size();
        for(int i = 0; i < min(n,m); i++){
            char c1 = word1[i];
            char c2 = word2[i];

            int a = ord[c1];
            int b = ord[c2];

            if(a > b ) return false;
            else if(a < b) return true;
        }
        if(m < n) return false;
        return true;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size() == 1) return true;
        unordered_map<char, int> ord(26);
        for(int i = 0; i < order.size(); i++){
            ord.insert({order[i],i});
        }

        for(int i = 0; i < words.size() - 1; i++){
            string word1 = words[i];
            string word2 = words[i+1];
            bool what = check(word1, word2, ord);
            if(what == false) return false;
        }
        return true;
    }
};