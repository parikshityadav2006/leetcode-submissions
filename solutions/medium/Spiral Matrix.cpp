// Title: Spiral Matrix
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    void spiral(vector<vector<int>>& matrix, vector<vector<bool>>& visited, vector<pair<int,
    int>>& dir, int i, int j, int& k, vector<int>& res){
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || visited[i][j]) {
            k=(k+1)%4;
            return;
        }
        
        visited[i][j]=true;
        res.push_back(matrix[i][j]);
         
        for(int a=0; a<4; a++)
        spiral(matrix,visited,dir,i+dir[k].first,j+dir[k].second,k,res);
        
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        vector<int> res;
        
        vector<pair<int,int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        int k=0;
        spiral(matrix,visited,dir,0,0,k,res);
        return res;
    }
};
