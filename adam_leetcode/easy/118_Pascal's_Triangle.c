// 118. Pascal's Triangle

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    *returnColumnSizes = (int *)malloc(numRows * sizeof(int));
    int **ret = (int **)malloc(sizeof(int *) * numRows);
    for (int n = 1; n <= numRows; n++)
    {
        (*returnColumnSizes)[n - 1] = n;
        int *col = malloc(sizeof(int) * n);
        ret[n - 1] = col;
        col[0] = 1;
        col[n - 1] = 1;
        if (n <= 2)
            continue;
        for (int i = 1; i < n - 1; i++)
        {
            col[i] = ret[n - 2][i] + ret[n - 2][i - 1];
        }
        // printf("----------LAYER %d----------", n);
        // for (int j=0; j<n; j++) printf("%d ", col[j]);
        // printf("----------------------------\n");
    }
    *returnSize = numRows;
    return ret;
}

// Runtime: 3 ms, faster than 47.26% of C online submissions for Pascal's Triangle.
// Memory Usage: 6.2 MB, less than 15.40% of C online submissions for Pascal's Triangle.