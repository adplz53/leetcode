// 268. Missing Number

int missingNumber(int *nums, int numsSize)
{
    int temp = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        temp += i;
        if (i < numsSize)
            temp -= nums[i];
    }
    return temp;
}

// Runtime: 42 ms, faster than 13.05% of C online submissions for Missing Number.
// Memory Usage: 6.6 MB, less than 44.64% of C online submissions for Missing Number.