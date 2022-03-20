// 350. Intersection of Two Arrays II

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *intersect(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize)
{
    int longer = (nums1Size > nums2Size) ? nums1Size : nums2Size;
    int *ret = (int **)malloc(sizeof(int *) * longer);
    *returnSize = 0;
    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = 0; j < nums2Size; j++)
        {
            if (nums1[i] == nums2[j])
            {
                ret[(*returnSize)++] = nums1[i];
                nums2[j] = -1;
                break;
            }
        }
    }
    return ret;
}

// Runtime: 8 ms, faster than 50.67% of C online submissions for Intersection of Two Arrays II.
// Memory Usage: 6.5 MB, less than 24.89% of C online submissions for Intersection of Two Arrays II.