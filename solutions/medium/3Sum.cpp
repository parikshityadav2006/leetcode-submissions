// Title: 3Sum
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/3sum/

            while (i < j) {
                
                if(nums[i] + nums[j] + nums[k]==0){
                    
                    res.push_back({nums[k],nums[i],nums[j]});    
                    i++;
                    j--;
                }
                else if (nums[i] + nums[j] + nums[k] < 0) {
                    i++;
                }
                else if(nums[i] + nums[j] + nums[k] > 0){
                    j--;
                }
                    while(i<j && nums[i]==nums[i-1])i++;
                    while(i<j && nums[j]==nums[j+1])j--;
            if(k>0 && nums[k]==nums[k-1])continue;
            int j = nums.size() - 1;
            
            
            int i = k+1 ;
            
        for (int k = 0; k < nums.size()-2; k++) {
        
        vector <vector<int>> res;
        sort(nums.begin(),nums.end());
        
    vector<vector<int>> threeSum(vector<int>& nums) {
   public:
class Solution {
            }
