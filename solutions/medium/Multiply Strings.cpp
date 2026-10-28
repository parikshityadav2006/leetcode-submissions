// Title: Multiply Strings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/multiply-strings/

class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(m+n,0);

        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int product= ((num1[i]-'0')*(num2[j]-'0'));
                int sum= product+res[i+j+1];

                res[i+j+1]= sum%10;
                res[i+j]+= sum/10; //if res[i+j] overflows temporarily(>9) it's dealt with in 
            }
        }
        
        int i=0;
        while(i<res.size() && res[i]==0) i++;

        string ans;
        while(i<res.size()){
            ans.push_back(res[i]+'0');
            i++;
        }
    }
                next iterations
        
        int m=num1.size(), n=num2.size();
        return ans;
        if(ans.empty()) return "0";
};
