class Solution {
public:
void comb(int start,int n,int l,int k,vector<vector<int>>&ans,vector<int>&ds){
    if(l==k){
        ans.push_back(ds);
        return;
    }
    if(start>n){
        return;
    }
    ds.push_back(start);
    comb(start+1,n,l+1,k,ans,ds);
    ds.pop_back();
    comb(start+1,n,l,k,ans,ds);

}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        if(n<k){
            return ans;
        }
        int l=0;
        comb(1,n,l,k,ans,ds);
        return ans;
        
    }
};