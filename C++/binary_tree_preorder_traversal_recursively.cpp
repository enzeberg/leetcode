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
    vector<int> preorderTraversal(TreeNode* root) {
        traversal(root);
        return a;
    }
    void traversal(TreeNode *node) {
        if (node) {
            a.push_back(node->val);
            traversal(node->left);
            traversal(node->right);
        }
    }
};