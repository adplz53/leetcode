// 2. Add Two Numbers

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode ret = {0, NULL};
    struct ListNode *ptr = &ret;
    int c = 0;
    while (l1 || l2 || c)
    {
        int v1 = 0, v2 = 0, sum;
        if (l1)
            v1 = l1->val;
        if (l2)
            v2 = l2->val;
        sum = v1 + v2 + c;
        if (sum / 10)
            c = 1;
        else
            c = 0;
        ptr->next = malloc(sizeof(struct ListNode));
        ptr->next->val = sum % 10;
        ptr->next->next = NULL;
        ptr = ptr->next;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    return ret.next;
}

// Runtime: 12 ms, faster than 78.31% of C online submissions for Add Two Numbers.
// Memory Usage: 7.6 MB, less than 83.31% of C online submissions for Add Two Numbers.