// 75. Sort Colors

void swap(int *seq, int a, int b)
{
    int temp = *(seq + a);
    *(seq + a) = *(seq + b);
    *(seq + b) = temp;
}

int partition(int *seq, int start, int end)
{
    int j = start - 1;
    int pivot = *(seq + end);
    for (int i = start; i <= end; i++)
    {
        if ((*(seq + i) < pivot) || i == end)
        {
            j++;
            swap(seq, i, j);
        }
    }
    return j;
}
void QuickSort(int *nums, int start, int end)
{
    if (start < end)
    {
        int index = partition(nums, start, end);
        QuickSort(nums, start, index - 1);
        QuickSort(nums, index + 1, end);
    }
}

void sortColors(int *nums, int numsSize)
{
    QuickSort(nums, 0, numsSize - 1);
}

// Runtime: 4 ms, faster than 60.21% of C online submissions for Sort Colors.
// Memory Usage: 6.2 MB, less than 37.08% of C online submissions for Sort Colors.