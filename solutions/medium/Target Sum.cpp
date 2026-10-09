// Title: Target Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/target-sum/

        for(int num: nums){
            S+=num;
        }
        if(target>S || target<-S) return 0; // target out of range
        
        //[-S,S] is the range of the sum obtained from nums
        //memo[i][j]:form sum j using first i elements of nums
        vector<vector<int>> memo(nums.size(),vector<int>(2*S+1,0));
        
        //origin at j=S, thus ways to make sum of x using i elements is denoted by 
        memo[i][S-x]
        memo[0][S-nums[0]]+=1;     
    
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<2*S+1;j++){
                //either add nums[i] to sequence of 0...i-1 elements with sum j-nums
                [i] to make sum of j
                if(j-nums[i]>=0) memo[i][j]+=memo[i-1][j-nums[i]];
                //or subtract nums[i] from sequence of 0...i-1 elements with sum j
                +nums[i] to make sum of j
                if(j+nums[i]<2*S+1) memo[i][j]+=memo[i-1][j+nums[i]];
            }
        }
    }
        return memo[nums.size()-1][target+S];
        int S=0;
        //base cases
        memo[0][S+nums[0]]+=1;   
};
    int findTargetSumWays(vector<int>& nums, int target) {
