class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && a < 0) {
                if (st.top() < -a) {
                    st.pop();               // top explodes
                }
                else if (st.top() == -a) {
                    st.pop();               // both explode
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;       // current explodes
                    break;
                }
            }

            if (!destroyed)
                st.push(a);
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};