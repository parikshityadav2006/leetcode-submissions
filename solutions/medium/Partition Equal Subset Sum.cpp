// Title: Partition Equal Subset Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/partition-equal-subset-sum/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(),nums.end(),0);
        if(total%2) return false;
        int target= total/2;
        
        vector<bool> memo(target+1,false);
        memo[0]=true;

        for(int num:nums){
            for(int j=target;j>=num;j--){
                memo[j]= memo[j] || memo[j-num];
            }
        }

        return memo[target];
    }
};
