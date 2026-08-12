// Title: Clone Graph
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/clone-graph/

            if(mp.find(curr)==mp.end()){
                NewNode = new Node(curr->val);
                mp[curr]=NewNode;
            }
            else NewNode=mp[curr];
            
            for(Node* i : curr->neighbors) {
                if(visited.count(i)==0){
                    q.push(i);
                    visited.insert(i);
                }
                Node* neighbor;
                if(mp.find(i)==mp.end()){
                    neighbor = new Node(i->val);
                    mp[i]=neighbor;
            Node* NewNode;
            q.pop();
            Node* curr = q.front();
        while (!q.empty()) {
        bool flag=1;   //using flag to update root node
        
        Node* root=nullptr;   //to store deep copy of first node
        
        visited.insert(node);
        q.push(node);   //initialise q with first node
        queue<Node*> q;
        unordered_map<Node*,Node*> mp;   //to interconnect existing nodes
        unordered_set<Node*> visited;
                }
                else neighbor=mp[i];
                
                NewNode->neighbors.push_back(neighbor);
            }
