// Title: Longest Increasing Path in a Matrix
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

class Solution {
private:
    void dfs(int i,int j, vector<vector<int>>& matrix, vector<vector<int>>& memo){
        if(j>0 && matrix[i][j-1]>matrix[i][j]) {
            if(memo[i][j-1]==1) dfs(i,j-1,matrix,memo);
            memo[i][j]=max(memo[i][j],memo[i][j-1]+1);
        }
        if(i>0 && matrix[i-1][j]>matrix[i][j]){
            if(memo[i-1][j]==1) dfs(i-1,j,matrix,memo);
            memo[i][j]=max(memo[i][j],memo[i-1][j]+1);
        };
        if(j<matrix[0].size()-1 && matrix[i][j+1]>matrix[i][j]) {
            if(memo[i][j+1]==1 ) dfs(i,j+1,matrix,memo);
            memo[i][j]=max(memo[i][j],memo[i][j+1]+1);
        }
        if(i<matrix.size()-1 && matrix[i+1][j]>matrix[i][j]) {
            if(memo[i+1][j]==1) dfs(i+1,j,matrix,memo);
            memo[i][j]=max(memo[i][j],memo[i+1][j]+1);
        }
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> memo(matrix.size(),vector<int>(matrix[0].size(),1));
        int lip=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                dfs(i,j,matrix,memo); 
                lip=max(lip,memo[i][j]);
            }
        }
        return lip;  
    }
};
