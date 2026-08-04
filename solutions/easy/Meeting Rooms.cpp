// Title: Meeting Rooms
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/meeting-rooms/

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
      if(intervals.empty())return true;
      
      sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const 
      vector<int>& b){
        return a[1]<b[1]; //sort by end value
      });
      
      int currEnd=intervals[0][1];

      for(int i=1;i<intervals.size();i++){
        if(currEnd>intervals[i][0]){
            return false;
        }
        else{
            currEnd=intervals[i][1];
        }
      }
    return true;   
    }
};
