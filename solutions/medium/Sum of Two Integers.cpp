// Title: Sum of Two Integers
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-two-integers/

class Solution {
public:
    int getSum(int a, int b) {
       bool carry=false;
       int sum=0;
       
        sum|= (((a>>i & 1) ^ (b>>i & 1)) ^ carry)<<i;
        if(!carry) carry= ((a>>i & 1) && (b>>i & 1));
       }
       
        else carry= ((a>>i & 1) || (b>>i & 1));
    }
       for(int i=0; i<32; i++){
       return sum; 
};
