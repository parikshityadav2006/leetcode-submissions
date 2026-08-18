// Title: Course Schedule
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/course-schedule/

                indegree[adj[curr][i]]--;
                if(indegree[adj[curr][i]]==0){
                    taken++;
                    free.push(adj[curr][i]);
                }
            }
        }
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);
        queue<int> free;

        for(auto i: prerequisites){
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) free.push(i);
        }
        int taken = free.size();
        
                if(indegree[adj[curr][i]]==0) continue;
           int curr=free.front();
           free.pop(); 
           for(int i=0;i<adj[curr].size();i++){
class Solution {
private:
    void bfs(vector<vector<int>>& adj, vector<int>& indegree, queue<int>& free, 
    int& taken){
        while(!free.empty()){
