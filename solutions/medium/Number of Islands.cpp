// Title: Number of Islands
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-islands/

        if(r-1>=0 && !visited[r-1][c] && grid[r-1][c]=='1'){
            dfs(grid, visited, r-1, c);
        }
        if(c+1<grid[0].size() && !visited[r][c+1] && grid[r][c+1]=='1'){
            dfs(grid, visited, r, c+1);
        }
        if(c-1>=0 && !visited[r][c-1] && grid[r][c-1]=='1'){
            dfs(grid, visited, r, c-1);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int islands=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(grid,visited,i,j);
                    islands++;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),
        0));
                }
            }
        }
            dfs(grid, visited, r+1, c);
        if(r+1<grid.size() && !visited[r+1][c] && grid[r+1][c]=='1'){

        visited[r][c]=1;
    int c){
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int r, 
private:
class Solution {
