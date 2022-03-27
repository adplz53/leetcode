// 1356. Sort Integers by The Number of 1 Bits

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int count_one(int n)
{
    int count = 0;
    while (n != 0)
    {
        count += n % 2;
        n >>= 1;
    }
    return count;
}

int cmp(const void *a, const void *b)
{
    int val_a = *(int *)a, val_b = *(int *)b;
    int result = count_one(val_a) - count_one(val_b);
    if (result == 0)
        return (val_a - val_b);
    else
        return result;
}

int *sortByBits(int *arr, int arrSize, int *returnSize)
{
    int *ret = (int *)malloc(sizeof(int) * arrSize);
    *returnSize = arrSize;
    qsort(arr, arrSize, sizeof(int), cmp);
    ret = arr;
    return ret;
}

// Runtime: 18 ms, faster than 95.35% of C online submissions for Sort Integers by The Number of 1 Bits.
// Memory Usage: 8.2 MB, less than 36.05% of C online submissions for Sort Integers by The Number of 1 Bits.