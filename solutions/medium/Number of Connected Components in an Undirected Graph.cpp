// Title: Number of Connected Components in an Undirected Graph
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

    }
        if(rank[rx]<rank[ry]) swap(rx,ry);
        if(rx==ry) return false;
        parent[ry]=rx;
        rank[rx]++;
        return true;
        components--;

    bool connected(int x,int y){
        return find(x)==find(y);
    }

    int numComponents(){
        return components;
    }
};
class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        UnionFind graphs(n);

        for(auto& edge: edges){
            graphs.unite(edge[0],edge[1]);
        }

        int ry=find(y);
        int rx=find(x);
    bool unite(int x, int y){

    }
        return find(parent[node]);
        if(parent[node]==node) return node;
