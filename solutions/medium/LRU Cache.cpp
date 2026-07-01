// Title: LRU Cache
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/lru-cache/

                }
                tail->next=new Node(key,value);
                tail->next->prev=tail;
                tail=tail->next;
                mp[key]=tail;
                tail->next=nullptr;
