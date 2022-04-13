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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        if (abs(calcHeight(root->left) - calcHeight(root->right)) > 1) {
            return false;
        } else {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
    int calcHeight(TreeNode *root) {
        if (!root) return 0;
        return 1 + max(calcHeight(root->left), calcHeight(root->right));
    }
};