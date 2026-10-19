// Title: Regular Expression Matching
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
    bool isMatch(string text, string pattern) {
        if (pattern.empty())
             (pattern[0] == text[0] || pattern[0] == '.'));

        if (pattern.length() >= 2 && pattern[1] == '*') {
            return (
            return text.empty();

        bool first_match =
            (!text.empty() &&
                isMatch(text, pattern.substr(2)) ||
                (first_match && isMatch(text.substr(1), pattern))
            );
        } else {
            return (
                first_match &&
                isMatch(text.substr(1), pattern.substr(1))
            );
        }
    }
};
