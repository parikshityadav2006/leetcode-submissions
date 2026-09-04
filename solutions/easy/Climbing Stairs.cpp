// Title: Climbing Stairs
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        if (n<=2) return n;

        int first=1;  // ways to reach first step
        int second=2; // ways to reach second step
        int next;   // ways to reach the next step

        for(int i=3; i<=n; i++){
            next =first+second;
            first=second;
            second=next;
        }
        return next;
    }
};
class Solution {