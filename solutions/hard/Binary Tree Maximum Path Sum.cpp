// Title: Binary Tree Maximum Path Sum
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right
 (right) {}
 * };
 */
class Solution {  
    int rootMax=INT_MIN;
    int pathSum(TreeNode* root){
        if(!root)return 0;
        int l=pathSum(root->left);
        int r=pathSum(root->right);
        if(l<0)l=0;
        if(r<0)r=0;
        rootMax=max(rootMax,root->val+l+r);
        return root->val+max(l,r);
    }

public:
    int maxPathSum(TreeNode* root) {
       if(!root)return 0;
       int carrier= pathSum(root);
       return rootMax;  
    }
};
 * struct TreeNode {
/**
 * Definition for a binary tree node.
