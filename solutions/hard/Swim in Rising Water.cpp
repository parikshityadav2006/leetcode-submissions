// Title: Swim in Rising Water
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/swim-in-rising-water/

            for(auto [node,high]: adj[currNode]){
                if(!visited[node]) pq.push({max(high,currHigh),node});
            }
        }
        return -1;
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<pair<int,int>>> adj(n*n);
        
        int node=0;
        for(int i=0;i<grid.size();i++){


            if(currNode==n*n-1) return currHigh;
            pq.pop();

            if(visited[currNode]) continue; // stale entry
            visited[currNode]=1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,
        int>>> pq;
        pq.push({startHeight,0});

        vector<int> visited(n*n,0);
        
        while(!pq.empty()){
            auto [currHigh,currNode]= pq.top();
class Solution {
private:
    int dijkstra(int n, int startHeight, vector<vector<pair<int,int>>>& adj){
        
