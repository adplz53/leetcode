// 704. Binary Search Tree

int search(int *nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1, med;
    while (left <= right)
    {
        med = (left + right) / 2;
        if (nums[med] == target)
        {
            return med;
        }
        else if (nums[med] < target)
        {
            left = ++med;
        }
        else
        {
            right = --med;
        }
    }
    return -1;
}

// Runtime: 32 ms, faster than 82.08% of C online submissions for Binary Search.
// Memory Usage: 7 MB, less than 96.91% of C online submissions for Binary Search.