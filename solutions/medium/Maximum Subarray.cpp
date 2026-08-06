// Title: Maximum Subarray
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int curr_sum=nums[0];
        int max_sum=curr_sum;
        while(j<nums.size()-1){
            j++;
            curr_sum+=nums[j];
            while(i<j && (nums[i]<0 || curr_sum<0)){
                curr_sum-=nums[i];
                i++;      
            }
            max_sum=max(max_sum,curr_sum);
        }
    return max_sum;
    }
};
