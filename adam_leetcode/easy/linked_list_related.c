/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//-----------------------------------------------------------------------------------------------------------

// 206. Reverse Linked List

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *now = head, *previous = NULL, *preceding = NULL;
    while (now)
    {
        preceding = now->next;
        now->next = previous;
        previous = now;
        now = preceding;
    }
    return previous;
}

// Runtime: 4 ms, faster than 78.85% of C online submissions for Reverse Linked List.
// Memory Usage: 6.4 MB, less than 49.42% of C online submissions for Reverse Linked List.

//-----------------------------------------------------------------------------------------------------------

// 203. Remove Linked List Elements

struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *now = head, *previous = NULL;
    while (now)
    {
        if (now->val == val)
        {
            if (previous)
            {
                previous->next = now->next;
            }
            else
            {
                head = now->next;
            }
        }
        else
        {
            previous = now;
        }
        now = now->next;
    }
    return head;
}

// Runtime: 11 ms, faster than 80.59% of C online submissions for Remove Linked List Elements.
// Memory Usage: 8.1 MB, less than 35.24% of C online submissions for Remove Linked List Elements.