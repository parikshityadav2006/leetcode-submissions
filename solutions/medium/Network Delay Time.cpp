// Title: Network Delay Time
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/network-delay-time/

        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto triplet: times){
            adj[triplet[0]].push_back({triplet[1],triplet[2]});
        }
        
        unordered_map<int,int> dist;
        for(int i=1;i<=n;i++){
            dist[i]=INT_MAX;
        }
        dist[k]=0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
public:
        }
    }
            }
                }
                    pq.push({adjNode,dist[adjNode]});
                    dist[adjNode]=distance+weight;
            for(auto [adjNode,weight] : adj[currNode]){
                if(distance+weight<dist[adjNode]){
            

            if(dist[currNode]<distance) continue; //outdated entry
            pq.pop();
            auto [currNode,distance] =pq.top();
        while(!pq.empty()){
    int>>,greater<pair<int,int>>>& pq) {
    unordered_map<int,int>& dist, priority_queue<pair<int,int>,vector<pair<int,
    void djikstra(int k, unordered_map<int,vector<pair<int,int>>>& adj, 
private:
class Solution {
