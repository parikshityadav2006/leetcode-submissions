// Title: Find the Duplicate Number
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-duplicate-number/

        unordered_map <int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto pair :mp){
            if(pair.second>1){
        }
                return pair.first;
            }
    return NULL;
    }
};
