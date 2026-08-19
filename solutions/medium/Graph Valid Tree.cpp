// Title: Graph Valid Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/graph-valid-tree/

        
        // Make the adjacency list.
        for (auto& edge : edges) {
            adjacencyList[edge[0]].push_back(edge[1]);
            adjacencyList[edge[1]].push_back(edge[0]);
        }
        
        if ((int)edges.size() != n - 1) return false;
public:
    vector<vector<int>> adjacencyList;
        

        if (seen.count(node)) return;
        seen.insert(node);
        for (int neighbour : adjacencyList[node]) {
            dfs(neighbour);
        }
    }
        // Carry out depth first search.
        dfs(0);
        // Inspect result and return the verdict.
        return (int)seen.size() == n;
    }
    
    unordered_set<int> seen;
    bool validTree(int n, vector<vector<int>>& edges) {
    void dfs(int node) {
private:
class Solution {
        adjacencyList.resize(n);
};
