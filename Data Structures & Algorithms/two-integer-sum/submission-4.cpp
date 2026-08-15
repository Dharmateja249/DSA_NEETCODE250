class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            int comple=target-nums[i];
            if(mp.find(comple)!=mp.end()){
                return{mp[comple],i};
            }
            mp[nums[i]]=i;
        }
        return {0,0};
        
    }
};
