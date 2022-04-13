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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return NULL;
        while (head -> next && head -> next -> val == head -> val) {
            head = head -> next;
        }
        ListNode* previous = head;
        ListNode* p;
        while (previous -> next) {
            p = previous -> next;
            while (p -> next && p -> next -> val == p -> val) {
                p = p -> next;
            }
            previous -> next = p;
            previous = p;
        }
        return head;
    }
};