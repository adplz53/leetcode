// 169. Majority Element

int majorityElement(int *nums, int numsSize)
{
    int maj = nums[0], count = 1;
    for (int i = 1; i < numsSize; i++)
    {
        if (count == 0)
        {
            maj = nums[i];
            count++;
            continue;
        }
        if (nums[i] == maj)
            count++;
        else if (nums[i] != maj)
            count--;
    }
    return maj;
}

// Runtime: 16 ms, faster than 97.43% of C online submissions for Majority Element.
// Memory Usage: 7.7 MB, less than 68.30% of C online submissions for Majority Element.