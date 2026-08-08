// Title: Hand of Straights
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/hand-of-straights/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize>0) return false;

        map<int,int> count;
        for(int card : hand) count[card]++;

        for(auto& [currVal, currCount] : count){
            if(currCount==0) continue;

            int need=currCount;  // this many groups must start with this card

            for(int i=0;i<groupSize;i++){
                int nextVal=currVal+i;
                if(count.find(nextVal)==count.end() || count[nextVal]<need) return 
                count[nextVal]-=need;
            }
        }

        return true;
    }
};
                false;  // consecutive values check
