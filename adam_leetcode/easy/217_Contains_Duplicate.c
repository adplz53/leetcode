// 217. Contains Duplicate

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

bool containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
            return true;
    }
    return false;
}

// Runtime: 131 ms, faster than 68.91% of C online submissions for Contains Duplicate.
// Memory Usage: 13.1 MB, less than 36.73% of C online submissions for Contains Duplicate.