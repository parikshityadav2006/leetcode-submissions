// Title: Flood Fill
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/flood-fill/

            dfs(image,visited,sr+1,sc,color);
        }
        if(sr-1>=0 && !visited[sr-1][sc] && image[sr-1][sc]==original_color){
            dfs(image,visited,sr-1,sc,color);
        }
        if(sc+1<image[0].size() && !visited[sr][sc+1] && image[sr][sc+1]
        ==original_color){
            dfs(image,visited,sr,sc+1,color);
        }
        if(sc-1>=0 && !visited[sr][sc-1] && image[sr][sc-1]==original_color){
            dfs(image,visited,sr,sc-1,color);
        }
        for(auto i: dirs){
            if(sr+i.first<image.size() && sc+i.second<image[0].size() && image
            [sr+i.first][sc+i.second]==image[sr][sc]){
               image[sr+i.first][sc+i.second]=color; 
            }   
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, 
    int color) {
        vector<vector<bool>> visited{image.size(),vector<bool>(image[0].size(),
        0)};
        dfs(image,visited,sr,sc,color);
        return image;
    }
};
