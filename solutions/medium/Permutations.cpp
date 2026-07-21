// Title: Permutations
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/permutations/

                skip (continue)\n";
    }

    void backtrack(vector<int>& nums, vector<int>& curr, vector<bool>& visited){

        printState("ENTER backtrack, depth=" + to_string(depth), curr, visited);
        depth++; // going one level deeper for everything inside this call

        if(curr.size() == nums.size()){
            cout << string(depth * 2, ' ') << ">>> BASE CASE HIT -> push [";
            for(int x : curr) cout << x << " ";
            cout << "]\n";
            res.push_back(curr);
            depth--; // returning, so step back out
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(visited[i] == 1){
                cout << string(depth * 2, ' ') << "i=" << i << " already visited -> 
class Solution {
private:
    int depth = 0; // tracks recursion depth, just for indentation

    // helper to print curr[] and visited[] at any point, indented by depth
    void printState(const string& label, vector<int>& curr, vector<bool>& visited){
        cout << string(depth * 2, ' ') << label
             << " | curr=[";
        for(int x : curr) cout << x << " ";
        cout << "] visited=[";
        for(bool b : visited) cout << b << " ";
        cout << "]\n";
