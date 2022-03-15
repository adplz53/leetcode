// 412. Fizz Buzz

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char **fizzBuzz(int n, int *returnSize)
{
    *returnSize = n;
    char **ret = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        char *temp = (char *)malloc(sizeof(char) * 9);
        ret[i] = temp;
        if ((i + 1) % 15 == 0)
            sprintf(temp, "%s", "FizzBuzz");
        else if ((i + 1) % 3 == 0)
            sprintf(temp, "%s", "Fizz");
        else if ((i + 1) % 5 == 0)
            sprintf(temp, "%s", "Buzz");
        else
            sprintf(temp, "%d", i + 1);
        // printf("%d, %s\n", i, temp);
    }

    // for (int i=0; i<n; i++){
    //     printf("%s\n", ret[i]);
    // }
    return ret;
}

// Runtime: 19 ms, faster than 7.89% of C online submissions for Fizz Buzz.
// Memory Usage: 7.2 MB, less than 17.43% of C online submissions for Fizz Buzz.