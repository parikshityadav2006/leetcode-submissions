// Title: Decode Ways
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/decode-ways/

class Solution {
public:
    int numDecodings(string s) {
        int prev1 = 1;  // number of ways to decode the previous position
        int prev2 = 1;  // number of ways to decode the position before 
        previous position

        for (int i = 0; i < s.size(); i++) {

            // Number of ways to decode up to current character
            int curr = 0;

            // decode s[i] as a single digit, s[i] must not be 0
            if (s[i] != '0')
                curr += prev1;

            // decode s[i-1] and s[i] together as a two digit number 
            if (i > 0) {
                int num = (s[i - 1] - '0') * 10 + (s[i] - '0');
                if (num >= 10 && num <= 26) // verify that two digit 
                number is valid i.e. corresponds to a character a-z
                    curr += prev2;
            }
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
