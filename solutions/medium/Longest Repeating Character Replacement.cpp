// Title: Longest Repeating Character Replacement
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-repeating-character-replacement/

                }
                    freq[s[i]]--;
                if (j-i+1-max_freq>k) {
                max_freq=max(max_freq,freq[s[j]]);
            }
        return max(longest, count);
        int j = 0;
        int count = 1;
        int longest = 0;
        unordered_map<char, int> freq;
            while(j < s.size() - 1){
                j++;
                freq[s[j]]++;
                    count--;
    }
                    longest=max(longest,count);
        int i = 0;
    int characterReplacement(string s, int k) {
public:
class Solution {
        freq[s[0]]++;
        int max_freq=freq[s[0]];
                    i++;
                count++;
};
