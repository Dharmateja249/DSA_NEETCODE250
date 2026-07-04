class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int m=nums.size()/3;
        vector<int>ans;
        for(auto it:freq){
            if(it.second>m){
                ans.push_back(it.first);
            }
        }
        return ans;

        
        
    }
};