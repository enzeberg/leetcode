/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isMirrored(root->left, root->right); 
    }
    bool isMirrored(TreeNode* left, TreeNode* right) {
        if (!left && !right) {
            return true;
        } else if (!left || !right) {
            return false;
        }
        return left->val == right->val && isMirrored(left->left, right->right)
            && isMirrored(left->right, right->left);
    }
};