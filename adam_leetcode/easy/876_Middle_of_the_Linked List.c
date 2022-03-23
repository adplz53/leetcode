// 876. Middle of the Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *middleNode(struct ListNode *head)
{
    int count = 0;
    struct ListNode *ptr = head;
    while (head)
    {
        count += 1;
        head = head->next;
    }
    for (int i = 0; i < (count / 2); i++)
        ptr = ptr->next;
    return ptr;
}

// Runtime: 6 ms, faster than 14.53% of C online submissions for Middle of the Linked List.
// Memory Usage: 5.9 MB, less than 35.55% of C online submissions for Middle of the Linked List.