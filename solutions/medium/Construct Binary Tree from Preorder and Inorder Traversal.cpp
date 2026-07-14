// Title: Construct Binary Tree from Preorder and Inorder Traversal
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* build(vector<int>& preorder,vector<int>::iterator start, vector<int>::iterator end){
        if(start==end || target>preorder.size()-1)return nullptr;
        
        TreeNode* node= new TreeNode(preorder[target]);
        auto it=find(start,end,preorder[target]);
        target++;
        
        node->left=build(preorder,start,it);
        node->right=build(preorder,it+1,end);
        return node;  
    }
public:
    int target=0;
    TreeNode* root;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder.begin(),inorder.end());
    }
};
