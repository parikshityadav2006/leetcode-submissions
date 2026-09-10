// Title: Coin Change
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> memo(amount+1,INT_MAX);
        memo[0]=0;
        for(int i=0;i<=amount;i++){
            for(auto coin: coins){
              if(coin < memo.size()-i && memo[i]!=INT_MAX) memo[i+coin]=min(memo[i+coin],memo[i]+1);  
            }
        }
        return memo[amount]==INT_MAX ? -1 : memo[amount];
    }
};
