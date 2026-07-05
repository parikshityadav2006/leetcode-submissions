// Title: Sliding Window Maximum
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/sliding-window-maximum/

    for(int i=l;i<=r;i++){
            window[nums[i]]++;
        }
    
   while(r<nums.size()){
        ans.push_back(window.rbegin()->first);
        
        window[nums[l]]--;
        
        l++;
        r++;
        if(r<nums.size())window[nums[r]]++;   
    }
        if(window.at(nums[l])==0)window.erase(nums[l]);
    int r=k-1;
    int l=0;
    vector<int> ans;
    map<int,int> window;
    
    return ans;
    }
};
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
public:
class Solution {
