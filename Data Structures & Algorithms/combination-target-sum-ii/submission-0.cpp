class Solution {
public:
void findcomb(int ind,int target,vector<int>&candidates,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==candidates.size()){
        if(target==0){
        ans.push_back(ds);
        
    }
    return;
    }
    
    if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        findcomb(ind+1,target-candidates[ind],candidates,ans,ds);
        ds.pop_back();
    }
    int nextind=ind+1;
    while(nextind<candidates.size()&&candidates[ind]==candidates[nextind]){
        nextind++;
    }
    findcomb(nextind,target,candidates,ans,ds);

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,target,candidates,ans,ds);
        return ans;
        
    }
};
