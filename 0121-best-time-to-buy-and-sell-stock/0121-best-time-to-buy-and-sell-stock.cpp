class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minc=prices[0],profit=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-minc;
            profit=max(profit,cost);
            minc=min(minc,prices[i]);
        }
        return profit;
    }
};