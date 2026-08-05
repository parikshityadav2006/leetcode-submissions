// Title: Meeting Rooms II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/meeting-rooms-ii/

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if(intervals.empty())return 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(intervals[0][1]);

        size_t rooms=1;
        for(int i=1;i<intervals.size();i++){

            if(intervals[i][0]>=pq.top()){
                pq.pop();
                pq.push(intervals[i][1]);
            }
            else{
               pq.push(intervals[i][1]); 
            }
            rooms=max(rooms,pq.size());
        }
    return rooms;
    }
        
        sort(intervals.begin(),intervals.end());
};
