/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 // 此算法只适用于不包含 -1 的测试用例，于 2020/03/11 通过 LeetCode
class Solution {
public:
    vector<int> vec1;
    vector<int> vec2;
    bool isSymmetric(TreeNode* root) {
        NLR(root);
        NRL(root);
        int size = vec1.size();
        for (int i = 0; i < size; ++i) {
            if (vec1[i] != vec2[i]) {
                return false;
            }
        }
        return true;
    }
    void NLR(TreeNode* root) {
        if (root) {
            vec1.push_back(root->val);
            NLR(root->left);
            NLR(root->right);
        } else {
            vec1.push_back(-1);
        }
    }
    void NRL(TreeNode* root) {
        if (root) {
            vec2.push_back(root->val);
            NRL(root->right);
            NRL(root->left);
        } else {
            vec2.push_back(-1);
        }
    }
};