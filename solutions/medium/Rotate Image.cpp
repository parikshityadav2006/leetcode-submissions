// Title: Rotate Image
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
 
        int n= matrix.size();
        for(int i=0; i<n/2; i++){
            for(int j=i; j<n-i-1; j++){
                swap(matrix[i][j],matrix[j][n-1-i]);
            }
        }
    }
                swap(matrix[i][j],matrix[n-1-i][n-1-j]);
                swap(matrix[i][j],matrix[n-1-j][i]);   
};
