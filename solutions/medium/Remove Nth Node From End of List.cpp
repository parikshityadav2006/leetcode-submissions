// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

            return head;
            node[node.size()-n-1]->next=nullptr;
        if(n==1){
        }
        
        node[node.size()-n-1]->next=node[node.size()-n+1];
        return head;



        

    }
