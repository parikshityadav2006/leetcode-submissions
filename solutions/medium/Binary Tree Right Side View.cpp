// Title: Binary Tree Right Side View
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/binary-tree-right-side-view/

            for (int i = 0; i < lvl_size; i++) {
                curr = q.front();
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            res.push_back(curr->val);
        }
        return res;
    }
       
};
