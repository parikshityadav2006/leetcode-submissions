// Title: Reorder List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reorder-list/

 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
       vector <ListNode*> nodes;
        ListNode* ptr=head;

        while(ptr){
            nodes.push_back(ptr);
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode() : val(0), next(nullptr) {}
