// Title: Merge k Sorted Lists
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/merge-k-sorted-lists/

            if (ptr1 == nullptr) {
                curr->next = ptr2;
            } else if (ptr2 == nullptr) {
                curr->next = ptr1;
            }

            lists[i + 1] = head->next;
        }
    return lists[lists.size()-1];
    }
};

