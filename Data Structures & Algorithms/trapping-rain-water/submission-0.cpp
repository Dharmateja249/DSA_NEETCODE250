class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int tot=0;
        vector<int>pmax(n);
        vector<int>smax(n);
        pmax[0]=height[0];
        for(int i=1;i<n;i++){
            pmax[i]=max(pmax[i-1],height[i]);
        }
        smax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            smax[i]=max(smax[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            if(height[i]<pmax[i]&&height[i]<smax[i]){
                tot+=min(pmax[i],smax[i])-height[i];
            }
        }
        return tot;
        
    }
};
