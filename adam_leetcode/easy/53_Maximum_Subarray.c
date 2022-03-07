// 53. Maximum Subarray

int maxSubArray(int *nums, int numsSize)
{
    int max = nums[0], current = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (current < 0 && current < nums[i])
            current = nums[i];
        else
            current += nums[i];
        if (current > max)
            max = current;
    }
    return max;
}

// Runtime: 202 ms, faster than 18.01% of C online submissions for Maximum Subarray.
// Memory Usage: 12.4 MB, less than 30.66% of C online submissions for Maximum Subarray.