// Title: Unique Paths
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                    memo[i][j]+=memo[i][j-1];
            }
        }
        return memo[m-1][n-1];
                }
                if (i-1>=0 && memo[i-1][j]) {
                    memo[i][j]+=memo[i-1][j];
                }
        memo[0][0]=1;
    }
                if (j-1>=0 && memo[i][j-1]) {
};
