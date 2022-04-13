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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> nums1, nums2;
        ListNode* p = l1;
        ListNode* q = l2;
        while (p) {
            nums1.push(p->val);
            p = p->next;
        }
        while (q) {
            nums2.push(q->val);
            q = q->next;
        }
        int carry = 0;
        ListNode* previous = NULL;
        while (!nums1.empty() && !nums2.empty()) {
            ListNode* node = new ListNode;
            int val = nums1.top() + nums2.top() + carry;
            if (val >= 10) {
                val %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            node->val = val;
            node->next = previous;
            previous = node;
            nums1.pop();
            nums2.pop();
        }
        while (!nums1.empty()) {
            int val = nums1.top() + carry;
            if (val > 9) {
                val %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            nums1.pop();
            ListNode* node = new ListNode;
            node->val = val;
            node->next = previous;
            previous = node;
        }
        while (!nums2.empty()) {
            int val = nums2.top() + carry;
            if (val > 9) {
                val %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            nums2.pop();
            ListNode* node = new ListNode;
            node->val = val;
            node->next = previous;
            previous = node;
        }
        if (carry) {
            ListNode* node = new ListNode;
            node->val = 1;
            node->next = previous;
            previous = node;
        }
        return previous;
    }
};