// Title: Insert Interval
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/insert-interval/

                               vector<int>& newInterval) {
        if(intervals.empty()){
            intervals.push_back(newInterval);
            return intervals;
        }
        int i = 0;
        while (i < intervals.size()) {
            if (newInterval[0] <= intervals[i][1]) {
                if(newInterval[1]<intervals[i][0]){
                    intervals.insert(intervals.begin()+i, newInterval);
                    return intervals;
                }
                int j = i;
                while (j+1< intervals.size() && newInterval[1] >= intervals[j+1]
                [0])
                    j++;
                vector<int> merge = {min(intervals[i][0], newInterval[0]),
                                     max(intervals[j][1], newInterval[1])};
                intervals.erase(intervals.begin() + i, intervals.begin() + j+1);
                intervals.insert(intervals.begin() + i, merge);
                return intervals;
            }
            else i++;
        }
    intervals.insert(intervals.end(), newInterval);
    return intervals;
    }
};
    vector<vector<int>> insert(vector<vector<int>>& intervals,
public:
class Solution {
