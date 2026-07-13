// Title: Count Good Nodes in Binary Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/

 */
class Solution {

private:
    void good(TreeNode* &root,int &count,int branchMax){
        if(root==nullptr)return;

        if(root->left){
            if(root->left->val>=branchMax)count++;
            good(root->left,count,max(branchMax,root->left->val));
        }
        if(root->right){
            if(root->right->val>=branchMax)count++;     
            good(root->right,count,max(branchMax,root->right->val)); 
        }
        else return;
    }

public:
    int goodNodes(TreeNode* root) {
        int count=1;
        good(root,count,root->val);
        return count;
    }
};

