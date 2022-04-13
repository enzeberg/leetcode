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
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        recursive(root);
        return result;
    }
    void recursive(TreeNode *node) {
        if (node) {
            recursive(node->left);
            result.push_back(node->val);
            recursive(node->right);
        }
    }
};