// Title: Two Sum
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum/

class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> indices;

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (indices.count(x) != 0 && indices[x] != i) {
                return {i, indices[x]};
            }
