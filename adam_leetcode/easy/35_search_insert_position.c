// 35. Search Insert Position

int searchInsert(int *nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1, med;
    if (target < nums[left])
        return left;
    if (target > nums[right])
        return right + 1;
    while (left <= right)
    {
        med = (left + right) / 2;
        if (nums[med] == target)
            return med;
        if (nums[med] > target)
            right = med - 1;
        else
            left = med + 1;
    }
    return left;
}

// Runtime: 4 ms, faster than 86.18% of C online submissions for Search Insert Position.
// Memory Usage: 6.1 MB, less than 54.81% of C online submissions for Search Insert Position.