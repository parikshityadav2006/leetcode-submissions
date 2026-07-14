// Title: Validate Binary Search Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/validate-binary-search-tree/

 *     TreeNode(long x, TreeNode *left, TreeNode *right) : val(x), left(left), right
 (right) {}
 * };
 */
class Solution {
public:
    
    bool isValidBST(TreeNode* root,long lower_bound=LONG_MIN ,long upper_bound=LONG_MAX){
        if(!root)return true;
        
        bool l=true;
        bool r=true;
        
        if(root->left){
            if(root->left->val<root->val && root->left->val>lower_bound){
                l=isValidBST(root->left, lower_bound, root->val);
            }
            else return false;       
        } 
        if(root->right){           
            if(root->right->val>root->val && root->right->val<upper_bound){
                r=isValidBST(root->right, root->val, upper_bound);
            }
            else return false;
        }       
        return(l && r);
    }
};
