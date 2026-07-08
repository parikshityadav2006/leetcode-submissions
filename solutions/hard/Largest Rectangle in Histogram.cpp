// Title: Largest Rectangle in Histogram
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/largest-rectangle-in-histogram/

        int max_area=0;
        int i=0;
        while(i<heights.size()){
       
        stack<int> stk;
            
        }
            stk.push(i);
            }
            else{
                int curr_ht=heights[stk.top()];
            }
                int width=stk.empty() ? i : i-stk.top()-1;
                max_area=max(max_area,curr_ht*width);
                stk.pop();
            i++;
        while(!stk.empty()){
                int curr_ht=heights[stk.top()];
                stk.pop();
                int width=stk.empty() ? i : i-stk.top()-1;
                max_area=max(max_area,curr_ht*width);
        }
    return max_area;
            if(stk.empty() || heights[i]>=heights[stk.top()]){
    }
};
    int largestRectangleArea(vector<int>& heights) {
public:
class Solution {
