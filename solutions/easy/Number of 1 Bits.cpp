// Title: Number of 1 Bits
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(int n) {
        int ones=0;
    }
        for(int i=0; i<log2(n)+1; i++) 
        if(n & (1<<i)) ones++;
        return ones;
};
