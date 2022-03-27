// 1337. The K Weakest Rows in a Matrix

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int *kWeakestRows(int **mat, int matSize, int *matColSize, int k, int *returnSize)
{
    *returnSize = k;
    int *table = (int *)calloc(matSize, sizeof(int));
    int *ret = (int *)calloc(matSize, sizeof(int));
    for (int row = 0; row < matSize; row++)
    {
        ret[row] = row;
        int count = 0;
        for (int col = 0; col < *matColSize; col++)
        {
            if (mat[row][col])
                count += 1;
            else
                break;
        }
        table[row] = count;
    }
    for (; k > 0; k--)
    {
        for (int i = matSize - 1; i > 0; i--)
        {
            if (table[ret[i]] < table[ret[i - 1]])
                swap(ret, i, i - 1);
        }
    }
    // for (int i=0; i<matSize; i++) printf("%d, %d\n", ret[i], table[ret[i]]);
    return ret;
}

// Runtime: 29 ms, faster than 34.69% of C online submissions for The K Weakest Rows in a Matrix.
// Memory Usage: 6.8 MB, less than 63.27% of C online submissions for The K Weakest Rows in a Matrix.