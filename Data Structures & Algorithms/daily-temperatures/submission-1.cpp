class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=temperatures.size()-1;
        vector<int>ans;
        stack<int>st;
        while(i>=0){
            if(st.empty()){
                ans.push_back(0);
                st.push(i);
                i--;
            }
            else if(temperatures[st.top()]>temperatures[i]){
                ans.push_back(st.top()-i);
                st.push(i);
                i--;
            }
            else{
                bool found=false;
                while(!st.empty()){
                    if(temperatures[st.top()]>temperatures[i]){
                        ans.push_back(st.top()-i);
                        st.push(i);
                        found=true;
                        break;
                    }
                    st.pop();
                }
                if(!found){
                    ans.push_back(0);
                    st.push(i);
                }

                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
