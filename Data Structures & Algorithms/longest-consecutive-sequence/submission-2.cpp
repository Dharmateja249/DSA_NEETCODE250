class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int i=1,j=nums.size();
        int count=1;
        int maxc=1;
        while(i<j){
            if(nums[i]-nums[i-1]==0){
                i++;
            }
            else if(nums[i]-nums[i-1]==1){
                count++;
                maxc=max(count,maxc);
                i++;
            }
            else{
                count=1;
                i++;
            }
        }
        return maxc;
        
    }
};
