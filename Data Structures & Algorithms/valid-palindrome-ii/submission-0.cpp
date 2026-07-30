class Solution {
public:
    bool is_valid(string& s){
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(s[left] != s[right]) return false;
            else{
                left++;
                right--;
            }
        }
        return true;

    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        int d = 0;

        while(left < right){
            if(s[left] != s[right]){
                d++;
                break;
            }
            else{
                left++;
                right--;
            }
        }
        if(d == 0) return true;

        else{
            string r ="";
            for(int i = 0; i < s.size(); i++){
                if(i != right){
                    r += s[i];
                }
            }
            bool ri = is_valid(r);
            string l ="";
            for(int i = 0; i < s.size(); i++){
                if(i != left){
                    l += s[i];
                }
            }
            bool le = is_valid(l);
            if(le == true || ri == true) return true;
        }

        return false;

    }
};