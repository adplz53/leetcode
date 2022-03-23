// 338. Counting Bits

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *countBits(int n, int *returnSize)
{
    *returnSize = n + 1;
    int *ret = (int *)calloc(*returnSize, sizeof(int));
    int power = 0;
    for (int i = 0; i < *returnSize; i++)
    {
        if (i == 0)
        {
            ret[i] = i;
            continue;
        }
        int base = 1 << power;
        if (i % base == 0)
        {
            ret[i] = 1;
            power += 1;
        }
        else
        {
            base >>= 1;
            ret[i] = i / base + ret[i % base];
        }
    }
    return ret;
}

// Runtime: 48 ms, faster than 74.91% of C online submissions for Counting Bits.
// Memory Usage: 10.3 MB, less than 80.33% of C online submissions for Counting Bits.