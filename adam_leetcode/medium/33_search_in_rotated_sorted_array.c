// 33. Search in Rotated Sorted Array

int search(int *nums, int numsSize, int target)
{
    // search for the origin before the rotation by binary search
    // L, R, M would be at the same index finally
    int left = 0, right = numsSize - 1, mid = (left + right) / 2;
    while (left < right)
    {
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
        mid = (left + right) / 2;
    }

    printf("%d", mid);

    // search for the target by binary search
    left = mid, right = numsSize + mid - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (nums[mid % numsSize] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid % numsSize] > target)
        {
            right = mid - 1;
        }
        else
        {
            return mid % numsSize;
        }
    }
    return -1;
}

// Runtime: 4 ms, faster than 70.83% of C online submissions for Search in Rotated Sorted Array.
// Memory Usage: 6.2 MB, less than 34.68% of C online submissions for Search in Rotated Sorted Array.