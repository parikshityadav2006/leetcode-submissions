// Title: Longest Substring Without Repeating Characters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> mp;
        int i=0;
        int j=0;
        int count=0;
        int longest=0;
        while(j<s.size()){
            if(mp.find(s[j])==mp.end() || (*mp.find(s[j])).second<i){
            mp[s[j]]=j;
            j++;
            count++;
            }
            else{
                longest=max(longest,count);
                i=mp[s[j]]+1;
                count=j-i+1;
                mp[s[j]]=j;
                j++;
            }
        }
    return max(longest,count);
    }
};
