class Solution {
public:
void findcomb(int ind,int target,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==nums.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(nums[ind]<=target){
        ds.push_back(nums[ind]);
        findcomb(ind,target-nums[ind],nums,ans,ds);
        ds.pop_back();
        

    }
    findcomb(ind+1,target,nums,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,target,nums,ans,ds);
        return ans;
        
    }
};
