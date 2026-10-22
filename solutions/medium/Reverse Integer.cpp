// Title: Reverse Integer
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
      if(x<0 and abs(x+1)>=INT_MAX) return 0;
      int digits=0;
      while(y!=0){
        y/=10;
        digits++;
      }
      y=abs(x);
      int reverse=0;
      for(int i=0; i<digits; i++){
        int curr_digit= y%10;
        y /= 10;
        if(reverse < INT_MAX-curr_digit*pow(10,digits-i-1)) reverse+= curr_digit*pow(10,
        digits-i-1);
        else return 0;
      } 
      if(x<0) return -reverse;
      return reverse;
    }
      int y=abs(x);
      if(abs(x)>=INT_MAX) return 0;
};
