// Title: Invert Binary Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/invert-binary-tree/

        invert(root->left);
        if(root==nullptr)return;
        swap(root->left,root->right);
        invert(root->right);
       
    void invert(TreeNode* &root){   
private:
class Solution {
 * };
 */
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode *right;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
    }
};
 * Definition for a binary tree node.
/**
