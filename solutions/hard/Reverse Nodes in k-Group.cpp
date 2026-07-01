// Title: Reverse Nodes in k-Group
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-nodes-in-k-group/

            ptr=ptr->next;
        }
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector <ListNode*> nodes;
        ListNode* ptr=head;
        while(ptr){
            nodes.push_back(ptr);
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
/**
