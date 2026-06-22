class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        int maj=nums.size()/2;
        for(auto ans:res){
            if(ans.second>maj){
                return ans.first;
            }
        }
        return -1;
        
    }
};