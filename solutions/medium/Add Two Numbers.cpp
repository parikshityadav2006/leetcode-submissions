// Title: Add Two Numbers
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/add-two-numbers/

        ListNode* newnode= new ListNode();
        ListNode* head=newnode;
        
        while(ptr1 && ptr2){
            
            sum=(ptr1->val+ptr2->val+carry)%10;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        int sum;
        int carry=0;
        
public:
