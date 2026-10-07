// Title: Best Time to Buy and Sell Stock with Cooldown
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> memo(prices.size(),vector<int>(2,0));
        memo[0][0]=0;
        for(int i=1;i<prices.size();i++){
            memo[i][0]=max(memo[i-1][1]+prices[i],memo[i-1][0]);
            if(i>1)memo[i][1]=max(memo[i-1][1],memo[i-2][0]-prices[i]);
    }
        }
        return max(memo[prices.size()-1][0],memo[prices.size()-1][1]);
        memo[0][1]=-prices[0];
            else memo[i][1]=max(memo[i-1][1],-prices[i]);
};
