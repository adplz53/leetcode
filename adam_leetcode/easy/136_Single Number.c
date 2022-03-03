// 136. Single Number

int singleNumber(int *nums, int numsSize)
{
    int temp = 0;
    for (int i = 0; i < numsSize; i++)
    {
        temp ^= nums[i];
    }
    return temp;
}

// Runtime: 22 ms, faster than 67.27% of C online submissions for Single Number.
// Memory Usage: 7 MB, less than 94.54% of C online submissions for Single Number.