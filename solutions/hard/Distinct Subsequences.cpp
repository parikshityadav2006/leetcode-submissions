// Title: Distinct Subsequences
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/distinct-subsequences/

class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<int>> memo(t.size(),vector<int>(s.size(),0));
        //memo[i][j] holds the number of ways 0...i characters of t can be 
        matched with 0...j characters of s

        for(int i=0;i<t.size();i++){
            for(int j=0;j<s.size();j++){
                unsigned int match=0;
                if(t[i]==s[j]){
                    if(i>0 && j>0) match= memo[i-1][j-1];
                    if(i==0) match=1; 
                }
                unsigned int prev= j>0 ? memo[i][j-1] : 0;
                memo[i][j]= prev + match;
            }
        }
        return memo[t.size()-1][s.size()-1];
    }
};
