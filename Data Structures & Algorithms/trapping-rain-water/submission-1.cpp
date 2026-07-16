class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int tot=0;
        int lm=0;
        int rm=0;
        int j=height.size()-1;
        while(i<j){
            if(height[i]<=height[j]){
                if(lm>height[i]){
                    tot+=lm-height[i];
                }
                else{
                    lm=height[i];
                }
                i++;
            }
            else{
                if(height[j]<rm){
                    tot+=rm-height[j];
                }
                else{
                    rm=height[j];
                }
                j--;
            }

        }
        return tot;
        
    }
};
