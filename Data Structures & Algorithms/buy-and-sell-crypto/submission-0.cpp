class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxprofit=0;
        int price=prices[0];
        int minprice=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=prices[i]-minprice;
            maxprofit=max(profit,maxprofit);
            minprice=min(prices[i],minprice);



        }
        return maxprofit;
        
    }
};
