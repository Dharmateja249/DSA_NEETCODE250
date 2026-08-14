class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i=1;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if(nums[i]== nums[i-1]){
                return true;
            }
            i++;
        }
        return false;
        
    }
};