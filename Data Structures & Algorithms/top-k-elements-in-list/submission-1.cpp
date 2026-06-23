class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>cnt;
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        int n=nums.size();
        vector<pair<int,int>>num;
        for(auto it:cnt){
            num.push_back({it.second,it.first});
        
        }
        vector<int>ans;
        sort(num.rbegin(),num.rend());
        for(int i=0;i<k;i++){
            ans.push_back(num[i].second);

        }
        return ans;
        
    }
};
