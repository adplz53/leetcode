// 141. Linked List Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// My sol.
bool hasCycle(struct ListNode *head)
{
    struct ListNode *record[100000];
    //struct ListNode **record = (struct ListNode*)malloc(sizeof(struct ListNode*)*10000);
    int count = 0;
    while (head != NULL)
    {
        for (int i = 0; i <= count; i++)
        {
            if (record[i] == head)
            {
                printf("%d", head->val);
                return true;
            }
        }
        record[++count] = head;
        head = head->next;
    }
    return false;
}

// Runtime: 236 ms, faster than 5.04% of C online submissions for Linked List Cycle.
// Memory Usage: 8.7 MB, less than 25.91% of C online submissions for Linked List Cycle.

// --------------------------------------------------------------------------------------------

// Discussion

// define 2 pointers, one for slow and another is for fast.
// if there is any loop, the fast one would catch up the slow one.

bool hasCycle(struct ListNode *head)
{
    struct ListNode *slow = head, *fast = head;
    while (fast && fast->next)
    {
        if (!slow || !slow->next)
            return false;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

// Runtime: 8 ms, faster than 87.24% of C online submissions for Linked List Cycle.
// Memory Usage: 7.9 MB, less than 61.50% of C online submissions for Linked List Cycle.