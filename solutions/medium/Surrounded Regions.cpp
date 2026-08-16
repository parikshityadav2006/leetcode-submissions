// Title: Surrounded Regions
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/surrounded-regions/

            dfs(board,vis,region,flag,r+1,c);
        }
        if(r - 1 >= 0 && !vis[r - 1][c] && board[r-1][c]=='O') {
            dfs(board,vis,region,flag,r-1,c);
        }
        if(c + 1 < board[0].size() && !vis[r][c + 1] && board[r][c+1]=='O') {
            dfs(board,vis,region,flag,r,c+1);
        }
        if(c - 1 >= 0 && !vis[r][c - 1] && board[r][c-1]=='O') {
            dfs(board,vis,region,flag,r,c-1);
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),0));
        for(int i=1;i<board.size()-1;i++){
            for(int j=1;j<board[0].size()-1;j++){
                if(board[i][j]=='O' && !visited[i][j]){
                    bool flag =0;
                    vector<pair<int,int>> region;
                    dfs(board,visited,region,flag,i,j);
                    if(flag==1) for(auto [r,c] :region) board[r][c]='O';
                }
            }
        }
    }
};
