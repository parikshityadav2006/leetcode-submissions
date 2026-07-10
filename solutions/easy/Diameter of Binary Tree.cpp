// Title: Diameter of Binary Tree
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/diameter-of-binary-tree/

 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int depth(TreeNode* &root){
        if(root==nullptr)return 0;
        int l=depth(root->left);
        int r=depth(root->right);
        return 1+max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;
        int l=depth(root->left);
        int r=depth(root->right);
        int d=l+r;
        return max(d,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
        
        
    }
};
