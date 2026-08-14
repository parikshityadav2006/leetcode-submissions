// Title: Pacific Atlantic Water Flow
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/pacific-atlantic-water-flow/

                    if (visited[r][c].second && !visited[r-1][c].second) {
                    if (changed)
                        q.push({r+1,c});
                }
                if(r-1>=0 && !(visited[r-1][c].first && visited[r-1][c].second) && heights[r-1][c]
                >=heights[r][c]){
                    bool changed = false;
                    if (visited[r][c].first && !visited[r-1][c].first) {
                        visited[r-1][c].first = true;
                        changed = true;
                    }
                    bool changed = false;
                    if (visited[r][c].first && !visited[r+1][c].first) {
                        visited[r+1][c].first = true;
                        changed = true;
                    }
                    if (visited[r][c].second && !visited[r+1][c].second) {
                        visited[r+1][c].second = true;
                        changed = true;
                    }
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto [r,c] = q.front(); //structural binding syntax
                q.pop();

                if(r+1<heights.size() && !(visited[r+1][c].first && visited[r+1][c].second) && 
                heights[r+1][c]>=heights[r][c]){
class Solution {
private:
    void bfs(vector<vector<int>>& heights, vector<vector<pair<bool,bool>>>& visited, 
    queue<pair<int,int>> q) {
