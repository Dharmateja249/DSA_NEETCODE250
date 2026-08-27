class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);   
        }
        int i=0;
        for(int i=1;i<nums.size()+2;i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return i+1;
        
        
    }
};