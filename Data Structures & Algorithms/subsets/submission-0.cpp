class Solution {
public:
void subsets(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[ind]);
    subsets(ind+1,nums,ans,ds);
    ds.pop_back();
    subsets(ind+1,nums,ans,ds);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        subsets(0,nums,ans,ds);
        return ans;
        
    }
};
