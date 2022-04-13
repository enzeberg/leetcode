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
    int rob(TreeNode* root) {
        if (!root) {
            return 0;
        }
        LRN(root);
        return root->val;
    }
    void LRN(TreeNode* node) {
        TreeNode* left = node->left;
        TreeNode* right = node->right;
        if (left) {
            LRN(left);
        }
        if (right) {
            LRN(right);
        }
        int dp0 = 0;
        int dp1 = node->val;
        if (left) {
            dp0 += left->val;
            if (left->left) {
                dp1 += left->left->val;
            }
            if (left->right) {
                dp1 += left->right->val;
            }
        }
        if (right) {
            dp0 += right->val;
            if (right->left) {
                dp1 += right->left->val;
            }
            if (right->right) {
                dp1 += right->right->val;
            }
        }
        node->val = max(dp0, dp1);
    }
};