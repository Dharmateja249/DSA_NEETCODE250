class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int water=0;
        int maxw=0;
        while(i<j){
            if(heights[i]<heights[j]){
                water=heights[i]*(j-i);
                maxw=max(water,maxw);
                i++;

            }
            else{
                water=heights[j]*(j-i);
                maxw=max(water,maxw);
                j--;
            }
        }
        return maxw;
        
    }
};
