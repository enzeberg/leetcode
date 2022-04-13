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
    bool hasCycle(ListNode *head) {
        ListNode *p = head;
        ListNode *q;
        while (p) {
            if (p->next == head) {
                return true;
            }
            q = p;
            p = p->next;
            q->next = head;
        }
        return false;
    }
};