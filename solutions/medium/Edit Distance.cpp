// Title: Edit Distance
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/edit-distance/

class Solution {
public:
    int minDistance(string word1, string word2) {
        if(word1.empty()) return word2.size();
        if(word2.empty()) return word1.size();
        
        vector<vector<int>> memo(word1.size()+1,vector<int>(word2.size()+1,-1));
        
            for(int j=1; j<=word2.size(); j++){
                if(word1[i-1]==word2[j-1]) {
                    if(i>0 && j>0) memo[i][j]=memo[i-1][j-1];
                    else memo[i][j]=0;
                }
                else if(i>0 && j>0) memo[i][j]=min({memo[i-1][j-1],memo[i-1][j],memo[i][j-1]}) + 1;
                else if(i>0) memo[i][j]=memo[i-1][j] + 1;
                else if(j>0) memo[i][j]=memo[i][j-1] + 1;
                else memo[i][j]=1;
            }
        }
        return memo[word1.size()][word2.size()];
    }

        for(int i=0;i<=word1.size();i++) memo[i][0]=i;
        for(int j=0;j<=word2.size();j++) memo[0][j]=j;
        for(int i=1; i<=word1.size(); i++){
};
