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
        int length = 0;
        ListNode* p = head;
        while (p) {
            ++length;
            p = p->next;
        }
        int m = length / 2;
        p = head;
        int count = 0;
        while (count < m) {
            p = p->next;
            ++count;
        }
        return p;
    }
};