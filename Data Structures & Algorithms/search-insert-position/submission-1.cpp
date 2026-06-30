class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int pos=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
                pos=i;
            }
        }
        return pos;
        
    }
};