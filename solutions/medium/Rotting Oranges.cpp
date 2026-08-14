// Title: Rotting Oranges
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotting-oranges/

                    grid[r][c-1]=2;
                    rotten.push({r,c-1});
                    fresh--;
                }
            }
                if(c-1>-1 && grid[r][c-1]==1){
                }
                    fresh--;
                    rotten.push({r,c+1});
                    grid[r][c+1]=2;
                if(c+1<grid[0].size() && grid[r][c+1]==1){
                }
                    fresh--;
                    rotten.push({r-1,c});
                    grid[r-1][c]=2;
                if(r-1>-1 && grid[r-1][c]==1){
                }
                    fresh--;
                    rotten.push({r+1,c});
                    grid[r+1][c]=2;
                if(r+1<grid.size() && grid[r+1][c]==1){
                rotten.pop();
            for(int i=0;i<sz;i++){
                auto [r,c]=rotten.front();
    fresh){
        int time=0;
        while(!rotten.empty()){
            int sz=rotten.size();
            time++;
private:
    int bfs(vector<vector<int>>& grid, queue<pair<int,int>> rotten, int& 
class Solution {
