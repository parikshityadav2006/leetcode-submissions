// Title: Permutation in String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/permutation-in-string/

        }
        
        int i=0;
        
        while(j<s2.size()){
        int j;
        for(j=0;j<s1.size();j++){
            window[s2[j]]++;
        }
            if(window!=need){
                
            }
                i++;
                j++;
                window[s2[j]]++;
            else{
                return true;
        j--;
                window[s2[i]]--;
                if(window[s2[i]]==0)window.erase(s2[i]);
            need[s1[i]]++;
        if(s1.size()>s2.size())return false;
        unordered_map <char,int> window;
        
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <char,int> need;
class Solution {
        
        for(int i=0;i<s1.size();i++){
