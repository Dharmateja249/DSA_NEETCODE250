class Solution {
public:
int findXor(int ind,vector<int>&nums,int temp){
    if(ind==nums.size()){
        return temp;
    }
    int take=findXor(ind+1,nums,temp^nums[ind]);
    int nottake=findXor(ind+1,nums,temp);
    return take+nottake;

}
    int subsetXORSum(vector<int>& nums) {
        return findXor(0,nums,0);
        
    }
};