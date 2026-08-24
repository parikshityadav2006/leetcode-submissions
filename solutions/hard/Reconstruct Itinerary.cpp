// Title: Reconstruct Itinerary
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/reconstruct-itinerary/

    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string>>> adj;
        for(auto ticket :tickets){
            adj[ticket[0]].push(ticket[1]);
        }

        vector<string> res;
        } 
           
            if(adj[node].empty()){
                res.push_back(node);
            }
            else{
            }
                stk.push(adj[node].top());
                adj[node].pop();
        reverse(res.begin(),res.end());
        return res;    
            string node=stk.top();
        while(!stk.empty()){

        return EularianPath("JFK",adj,res);
    }
};
        stack<string> stk;
    vector<string> EularianPath(string node, unordered_map<string, priority_queue<string, vector<string>, greater<string>>>& adj, vector<string>& res){
private:
        stk.push(node);
class Solution {
                stk.pop();
