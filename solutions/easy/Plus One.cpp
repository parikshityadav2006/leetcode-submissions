// Title: Plus One
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
            if(digits[i]+carry>9){
                digits[i]=0;
            }
        }
    }
        for(int i=digits.size()-1; i>=0; i--){
            else {
                digits[i]+=1;
                break;
            }
                carry=0;

        if(carry==1) digits.insert(digits.begin(),1);
        return digits;
};
