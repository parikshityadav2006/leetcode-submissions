// Title: Palindrome Partitioning
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/palindrome-partitioning/

class Solution {
protected:
    bool palindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    void backtrack(string s, vector<string>& curr, int start) {
        if (start == s.size()) {
            res.push_back(curr);
            return;
        }
        for (int end = start; end < s.size(); end++) {
            if (palindrome(s, start, end)) {
                curr.push_back(s.substr(start, end - start + 1));
                backtrack(s, curr, end + 1);
                curr.pop_back();
            }
        }
    }

public:
    vector<vector<string>> res;
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        backtrack(s, curr, 0);
        return res;
    }
