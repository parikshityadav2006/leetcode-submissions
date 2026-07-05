// Title: Minimum Window Substring
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-window-substring/

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> tfreq;
        unordered_map<char, int> window;
        string ans = "";
        for (char chr : t) {
            tfreq[chr]++;
        }

        int i = 0;
        int j = 0;
        int count = 0;
        while (j < s.size() || count==t.size()) {
            
            while (count == t.size()) {
                if (!tfreq.contains(s[i])||
                    (tfreq.contains(s[i]) && window[s[i]] > tfreq.at(s[i]))){
                    window[s[i]]--;
                    i++;
                } else {
                    if (ans.empty()) {
                        ans = s.substr(i, j - i);
                    }

                    else if (j - i < ans.size()) {
                        ans = s.substr(i, j - i);
                    }
                    window[s[i]]--;
                    i++;
