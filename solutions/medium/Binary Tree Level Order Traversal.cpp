// Title: Binary Tree Level Order Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-level-order-traversal/

 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
 * };
        vector<vector<int>> res;
        queue<TreeNode*> q;

        if (!root)
 * right(right) {}
            return res;
        q.push(root);
            vector<int> lvl;
        while (!q.empty()) {
            int lvl_size = q.size();
            for (int i = 0; i < lvl_size; i++) {
                TreeNode* curr = q.front();
                lvl.push_back(curr->val);
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            res.push_back(lvl);
        }
        return res;
    }
};
