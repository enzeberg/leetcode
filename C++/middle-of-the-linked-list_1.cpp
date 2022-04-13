/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        vector<ListNode*> nodes = {head};
        while (p->next) {
            nodes.push_back(p->next);
            p = p->next;
        }
        return nodes[nodes.size() / 2];
    }
};