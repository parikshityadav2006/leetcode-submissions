// Title: Car Fleet
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/car-fleet/

public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
      map<int,double> mp;
      stack<double> stk;
      int fleet=1;

        for(int i=0;i<position.size();i++){
        mp[position[i]]=(target-position[i])/static_cast<double>(speed[i]);
        }
        for(auto& pair: mp){
        stk.push(pair.second);
        }
        
        double longest=stk.top();
        stk.pop();
        while(!stk.empty()){
            
            if(stk.top()>longest){
                fleet++;
            }
            longest=max(longest,stk.top());
            stk.pop();
        }
    return fleet;
    }
};
