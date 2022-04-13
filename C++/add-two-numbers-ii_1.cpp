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
        while (!nums1.empty() || !nums2.empty() || carry) {
            ListNode* node = new ListNode;
            int sum = carry;
            if (!nums1.empty()) {
                sum += nums1.top();
                nums1.pop();
            }
            if (!nums2.empty()) {
                sum += nums2.top();
                nums2.pop();
            }
            if (sum > 9) {
                sum %= 10;
                carry = 1;
            } else {
                carry = 0;
            }
            node->val = sum;
            node->next = previous;
            previous = node;
        }
        return previous;
    }
};