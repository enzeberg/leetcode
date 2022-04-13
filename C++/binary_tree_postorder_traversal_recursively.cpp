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
    vector<int> a;
    vector<int> postorderTraversal(TreeNode* root) {
        recursive(root);
        return a;
    }
    void recursive(TreeNode *node) {
        if (node) {
            recursive(node->left);
            recursive(node->right);
            a.push_back(node->val);
        }
    }
};