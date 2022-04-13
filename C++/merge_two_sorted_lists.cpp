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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *L;
        ListNode *p1, *p2;
        if (l1 == NULL && l2) {
            L = l2;
        } else if (l1 && l2 == NULL) {
            L = l1;
        } else if (l1 && l2) {
            if (l1->val <= l2->val) {
                L = l1;
                p1 = l1->next;
                p2 = l2;
            } else {
                L = l2;
                p1 = l1;
                p2 = l2->next;
            }
            ListNode *p = L;
            while (p1 && p2) {
                if (p1->val <= p2->val) {
                    p->next = p1;
                    p = p1;
                    p1 = p1->next;
                } else {
                    p->next = p2;
                    p = p2;
                    p2 = p2->next;
                }
            }
            p->next = p1 ? p1 : p2;
        }
        
        return L;
    }
};

// The following is wrong!!!
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *L = l1;
        ListNode *p1 = l1, *p2 = l2;
        ListNode *p = L;
        while (p1 && p2) {
            if (p1->val <= p2->val) {
                p = p1;
                p1 = p1->next;
            } else {
                p = p2;
                p2 = p2->next;
            }
            p->next = p;
        }
        if (p1) p = p1;
        if (p2) p = p2;
        return L;
    }
};