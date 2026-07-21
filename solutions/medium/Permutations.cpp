// Title: Permutations
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/permutations/

private:
    void backtrack(vector<int>& nums, vector<int>& curr, vector<bool>& visited){

        if(curr.size()==nums.size()){
            res.push_back(curr);   
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(visited[i]==1)continue;
            curr.push_back(nums[i]);
            visited[i]=1;
            backtrack(nums,curr,visited);
            visited[i]=0;
            curr.pop_back();
        }                       
    }

public:
    vector<vector<int>>res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<bool> visited(nums.size(),0);
        backtrack(nums,curr,visited);
        return res;
    }
};

class Solution {
