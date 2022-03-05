// 83. Remove Duplicates from Sorted List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    struct ListNode *ptr = head, tmp;
    while (ptr)
    {
        while (ptr->next && ptr->next->val == ptr->val)
        {
            ptr->next = ptr->next->next;
        }
        ptr = ptr->next;
    }
    return head;
}

// Runtime: 8 ms, faster than 45.66% of C online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 6.4 MB, less than 58.76% of C online submissions for Remove Duplicates from Sorted List.