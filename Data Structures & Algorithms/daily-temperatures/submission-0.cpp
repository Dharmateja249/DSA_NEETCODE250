class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        int count=1;
        int c=0;
        bool found=false;
        for (int i=0;i<temperatures.size();i++){
            found=false;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    found=true;
                    break;
                }
                
            }
            if(found==false){
                    ans.push_back(0);
                }
        }
        return ans;
        
    }
};
