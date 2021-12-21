// 21. Merge Two Sorted Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    if (!list1 && !list2)
        return NULL;
    struct ListNode head;
    struct ListNode *ptr = &head;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            ptr->next = list1;
            list1 = list1->next;
        }
        else
        {
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }
    if (list1)
        ptr->next = list1;
    if (list2)
        ptr->next = list2;
    return head.next;
}

// Runtime: 4 ms, faster than 79.96% of C online submissions for Merge Two Sorted Lists.
// Memory Usage: 6 MB, less than 76.46% of C online submissions for Merge Two Sorted Lists.