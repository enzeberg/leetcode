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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        vector<int> level;
        queue<TreeNode*> q;
        if (root) q.push(root);
        int levelSize = 1;
        int counter = 0;
        while (!q.empty()) {
            TreeNode *node = q.front();
            level.push_back(node->val);
            q.pop();
            levelSize--;
            if (node->left) {
                q.push(node->left);
                counter++;
            }
            if (node->right) {
                q.push(node->right);
                counter++;
            }
            if (levelSize == 0) {
                levelSize = counter;
                counter = 0;
                // vector<int> temp(level);
                a.push_back(level);
                level.clear();
            }
        }
        return a;
    }
};