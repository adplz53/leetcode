/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getDecimalValue(struct ListNode *head)
{
    int value = 0;
    while (head != NULL)
    {
        value <<= 1;
        value += head->val;
        head = head->next;
    }
    return value;
}

// Runtime: 3 ms, faster than 15.49% of C online submissions for Convert Binary Number in a Linked List to Integer.
// Memory Usage: 5.7 MB, less than 70.42% of C online submissions for Convert Binary Number in a Linked List to Integer.