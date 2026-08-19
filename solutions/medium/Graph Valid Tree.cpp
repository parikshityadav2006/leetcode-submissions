// Title: Graph Valid Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/graph-valid-tree/

    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n,vector<int>(0));
        vector<int> visited(n,0);
        unordered_set<int> notRoots;
        
        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            notRoots.insert(i[1]); 
        }
        
        int root=-1;
        for(int i=0;i<n;i++){
            if(notRoots.count(i)==0){
                root=i;
                break;
            }
        }
        if(root==-1) return false;
        
        bool ans= dfs(root,root,adj,visited);

        for(auto i: visited){
            if(i==0) return false; // if tree isnt entirely explorable through one 
            node, there exists multiple trees
        }
    }
        return ans;
};
public:
    }
        return true;
