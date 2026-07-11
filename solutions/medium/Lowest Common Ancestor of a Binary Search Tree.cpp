// Title: Lowest Common Ancestor of a Binary Search Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if((root->val>=p->val && root->val<=q->val) || (root->val>=q->val && root->val<=p->val))    
        return root;

        if(p->val>root->val && q->val>root->val)
            return lowestCommonAncestor(root->right,p,q);

        if(p->val<root->val && q->val<root->val)
            return lowestCommonAncestor(root->left,p,q);
    
    return nullptr;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

