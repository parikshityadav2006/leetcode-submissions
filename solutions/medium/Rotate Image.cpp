// Title: Rotate Image
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>clone= matrix;
        int n= matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
        }
                matrix[j][n-1-i]=clone[i][j];
            }
    }
};
