// Title: Meeting Rooms II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/meeting-rooms-ii/

            
        int i = 0;
        int n = intervals.size();
        unordered_map<int,int> start;
        for(int i=0;i<intervals.size();i++){
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        
        int last=0;
        unordered_map<int,int> end;
            start[intervals[i][0]]++;
        }
            end[intervals[i][1]]++;
        int max_rooms=0;
            last=max(last,intervals[i][1]);
            rooms+=start[time];
        }
    }
        int rooms=0;
            rooms-=end[time];
            max_rooms=max(max_rooms,rooms);
        for(int time=0;time<=last;time++){
        return max_rooms;
};
