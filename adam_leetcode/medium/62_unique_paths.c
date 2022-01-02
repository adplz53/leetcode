// 62. Unique Paths

int uniquePaths(int m, int n)
{
    int *table = (int *)malloc(m * n * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0)
                *(table + i * n + j) = 1;
            else
            {
                *(table + i * n + j) = *(table + (i - 1) * n + j) + *(table + i * n + j - 1);
            }
        }
    }
    return *(table + m * n - 1);
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Unique Paths.
// Memory Usage: 5.8 MB, less than 16.83% of C online submissions for Unique Paths.