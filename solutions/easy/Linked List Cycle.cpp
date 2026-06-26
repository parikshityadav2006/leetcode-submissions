// Title: Linked List Cycle
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/linked-list-cycle/

            slow=slow->next;
            fast=fast->next->next;
        while(slow!=nullptr && fast!=nullptr && fast->next!=nullptr){
            return false;
        }
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr ){
        
        ListNode* fast=head;
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
 * };
 */
class Solution {
public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
/**
 * Definition for singly-linked list.
 * struct ListNode {
