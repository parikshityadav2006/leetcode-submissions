// Title: Burst Balloons
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/burst-balloons/

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        vector<vector<int>> memo(nums.size()+2,vector<int>(nums.size()+2,0));
        vector<int> burst_val(nums.size()+2,1);
        for(int i=0;i<nums.size();i++) burst_val[i+1]=nums[i];

        for(int i=nums.size()+1; i>=0; i--)
            for(int j=i+2; j<=nums.size()+1; j++)
                for(int k=i+1; k<j; k++)
                    memo[i][j]= max(memo[i][j], memo[i][k] + memo[k][j] + (burst_val[i] * burst_val[j] * burst_val[k]));
        
        return memo[0][nums.size()+1];
    }
};
