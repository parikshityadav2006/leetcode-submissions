// Title: Hand of Straights
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/hand-of-straights/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize>0) return false;
        int groups=hand.size()/groupSize;
        
        sort(hand.begin(),hand.end(),greater<>());
        
        while(!hand.empty()){
            int currSize=0;
            int i=hand.size()-1;
            while(!hand.empty() && currSize<groupSize){
                int currVal=hand[i];    // marking current element
                int j=i;
                while(i>0 && hand[i]==hand[i-1])i--;
                if(j-i+1>groups) return false;  // excessive duplicates check
                hand.erase(hand.begin()+i);
                currSize++;
                i--;
                if(currSize<groupSize && hand[i]-currVal!=1) return false;  // consecutive 
                values check;
            }
            if(hand.empty() && currSize<groupSize) return false;
            groups--;
        }
    return true;
    }

};
