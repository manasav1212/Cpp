//Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=dynamic-programming

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int Buy = INT_MAX;
        int profitToday = 0;
        for(int i=0;i<n;i++)
        {
            if(prices[i] < Buy)
                Buy = prices[i];
            profitToday = prices[i] - Buy;
            if(profitToday > profit)
                profit = profitToday;            
        }

        return profit;  
        
    }
};