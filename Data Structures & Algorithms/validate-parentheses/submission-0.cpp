class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        
        unordered_set<char> cl = {')','}', ']'} ;
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(st.empty() && cl.find(c) != cl.end()) return false;
            if(c == ')' && st.top() == '(' ) st.pop();
            else if(c == ']' && st.top() == '[' ) st.pop();
            else if(c == '}' && st.top() == '{' ) st.pop();
            else st.push(s[i]);
        }
        if(!st.empty()) return false;
        return true;
    }
};
