// Title: Non-overlapping Intervals
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/non-overlapping-intervals/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
                if (res.back()[1] > intervals[i][0]) {
                    count++;
                    if (res.back()[1] > intervals[i][1]) {
                        res.pop_back();
                    } 
                else res.push_back(intervals[i]);
        }
        return count;
    }
        int i = 1;
        vector<vector<int>> res(1,intervals[0]);
                        res.push_back(intervals[i]);
        while (i < intervals.size()) {
                }
                i++;
};
