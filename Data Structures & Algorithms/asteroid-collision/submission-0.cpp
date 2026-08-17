class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++){
            if(st.empty()){
                st.push(asteroids[i]);
                continue;
            }
            int aster = asteroids[i];
            bool flag = false;
            while(!st.empty() && aster < 0 && st.top() > 0){
                if(abs(st.top()) == abs(aster)){
                    st.pop();
                    flag = true;
                    break;
                }
                int a = max(abs(aster),abs(st.top()));
                if(a == abs(st.top())){
                    flag = true;
                    break;
                }
                else{
                    st.pop();
                }
            }
            if(flag == false){
                st.push(aster);
            }      
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};