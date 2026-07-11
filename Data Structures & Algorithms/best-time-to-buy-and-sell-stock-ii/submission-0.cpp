class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=prices.size()-1;
        int pro=0;
        int mpro=0;
        while(i<j){
            if(prices[i+1]>prices[i]){
                pro+=prices[i+1]-prices[i];
                mpro=max(mpro,pro);

            }
            i++;
        }
        return mpro;
        
    }
};