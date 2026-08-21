// Title: Redundant Connection
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/redundant-connection/

        
        for (auto i : edges) {
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<vector<int>> adj(edges.size() + 1, vector<int>(0));
public:
    }

                }
                cycle.push_back(curr);
                found = 1;
                return;
            } 
            else cycleDetector(adj[node][i], node, adj, visited, cycle, parent, 
            found);      
        }
class Solution {
private:
    void cycleDetector(int node, int prev, vector<vector<int>>& adj, vector<int>& 
    visited, vector<int>& cycle, unordered_map<int, int>& parent, bool& found) {
        visited[node] = 1;
        parent[node] = prev;
        for (int i = 0; i < adj[node].size(); i++) {
            if (found) return;
            if (adj[node][i] == prev) continue;
            if (visited[adj[node][i]] == 1) {
                int curr = node;
                while (curr != adj[node][i]) {
                    cycle.push_back(curr);
                    curr = parent[curr];
