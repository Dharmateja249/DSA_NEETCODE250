class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==res){
                count++;
            }
            else if(nums[i]!=res&&count>1){
                count--;
            }
            else{
                count=0;
                res=nums[i];

            }
        }
        return res;
        

    }
};