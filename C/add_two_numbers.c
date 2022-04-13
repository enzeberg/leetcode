/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
    L->next = NULL;
    int sum, theRemainder, carry;
    sum = l1->val + l2->val;
    theRemainder = sum % 10;
    L->val = theRemainder;
    carry = sum / 10;

    struct ListNode *r = L;
    struct ListNode *p1 = l1->next;
    struct ListNode *p2 = l2->next;

    
    while (p1 && p2)
    {
        struct ListNode *N = (struct ListNode *)malloc(sizeof(struct ListNode));
        N->next = NULL;
        sum = p1->val + p2->val + carry;
        theRemainder = sum % 10;
        N->val = theRemainder;
        carry = sum / 10;
        r->next = N;
        r = N;
        p1 = p1->next;
        p2 = p2->next;
    }

    while (p1)
    {
        struct ListNode *N = (struct ListNode *)malloc(sizeof(struct ListNode));
        N->next = NULL;
        sum = p1->val + carry;
        theRemainder = sum % 10;
        N->val = theRemainder;
        carry = sum / 10;
        r->next = N;
        r = N;
        p1 = p1->next;
    }
    while (p2)
    {
        struct ListNode *N = (struct ListNode *)malloc(sizeof(struct ListNode));
        N->next = NULL;
        sum = p2->val + carry;
        theRemainder = sum % 10;
        N->val = theRemainder;
        carry = sum / 10;
        r->next = N;
        r = N;
        p2 = p2->next;
    }

    if (carry != 0) {
        struct ListNode *N = (struct ListNode *)malloc(sizeof(struct ListNode));
        N->next = NULL;
        N->val = carry;
        r->next = N;
    }
    

    return L;
}
