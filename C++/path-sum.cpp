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
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) return false;
        sum -= root-> val;
        if (!root->left && !root->right) {
            return sum == 0;
        } else if (root->left) {
            if (root->right) {
                return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
            } else {
                return hasPathSum(root->left, sum);
            }
        } else {
            return hasPathSum(root->right, sum);
        }
    }
};