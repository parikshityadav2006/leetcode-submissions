// Title: Min Cost to Connect All Points
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-cost-to-connect-all-points/

        while(!pq.empty()){
            auto [currDist,currPoint] =pq.top();
            pq.pop();
            

            for(auto [point,dist]: adj[currPoint]){
                if(visited[point]) continue;
                pq.push({dist,point});
                
            }
        }
        return mstDist;
    }
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        unordered_map<int,vector<pair<int,int>>> adj;
        int mstDist=0;
        
        vector<int> visited(n,0);

        pq.push({0,0});
            visited[currPoint]=1;
            
            if(visited[currPoint]) continue;
            mstDist+=currDist;
        int>>> pq;
    int prim(int n, unordered_map<int,vector<pair<int,int>>>& adj){
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,
class Solution {
private:
        for(int i=0;i<points.size();i++){
