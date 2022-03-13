// 283. Move Zeroes

void moveZeroes(int *nums, int numsSize)
{
    int n = 0, i = 0;
    for (; i < numsSize; i++)
    {
        if (nums[i] == 0)
            continue;
        nums[n] = nums[i];
        if (n != i)
            nums[i] = 0;
        n++;
    }
}

// Runtime: 76 ms, faster than 93.56% of C online submissions for Move Zeroes.
// Memory Usage: 15.1 MB, less than 79.77% of C online submissions for Move Zeroes.