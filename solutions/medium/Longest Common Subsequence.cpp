// Title: Longest Common Subsequence
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-common-subsequence/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        vector<vector<int>> memo(text1.size(), vector<int>(text2.size(), 0));
        
            for (int j = 0; j < text2.size(); j++) {
                if (text1[i] == text2[j]) {
                    if(i==0 || j==0) memo[i][j]=1;
                    else memo[i][j] = memo[i-1][j-1] + 1;
                }
                else if(i>0 && j>0) memo[i][j] = max(memo[i-1][j],memo[i][j-1]);
            }
        }
        return memo[text1.size()-1][text2.size()-1];
                else if(i==0 && j>0) memo[i][j]=memo[i][j-1];
    }

                else if(j==0 && i>0) memo[i][j]=memo[i-1][j];
        for (int i = 0; i < text1.size(); i++) {
};
