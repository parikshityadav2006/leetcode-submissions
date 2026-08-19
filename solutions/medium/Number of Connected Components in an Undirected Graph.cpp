// Title: Number of Connected Components in an Undirected Graph
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

    bool common(vector<int>& a, vector<int>& b){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]) return true;
            }
        }
        return false;
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        for(int i=0;i<edges.size();i++){
            int flag=0; // if merging takes place, i-- to check all possible 
            mergings in next iteration 
            for(int j=i+1;j<edges.size();j++){
                if(common(edges[i],edges[j])){
                    flag=1;
                    merge(edges,edges[i],edges[j],j);
                    j--;
                }
            }
        if(flag) i--;
        }
        
        unordered_set<int> connected;
        for(int i=0;i<edges.size();i++){
            for(int j: edges[i]){
                connected.insert(j);
            }
        }

        int isolated=0;
        for(int i=0;i<n;i++){
