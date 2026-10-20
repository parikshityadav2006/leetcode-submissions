// Title: Reverse Bits
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0; i<32; i++){
            if(n & (1<<i)) ans+=pow(2,31-i);
        }
        return ans;
    }
};
