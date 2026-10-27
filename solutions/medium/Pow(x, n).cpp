// Title: Pow(x, n)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/pow(x,-n)/

class Solution {
public:
    double myPow(double x, int n) { 
        long long e=n;
        if (e<0) e= -e;

        double result = 1;
        while (e) {
            if (e % 2 == 1) {
                result = result * x;
                e -= 1;
            }
            x *= x;
            e = e/2;
        }
        return n<0 ? 1/result : result; 
    }
        if (e==0) return 1;
};
