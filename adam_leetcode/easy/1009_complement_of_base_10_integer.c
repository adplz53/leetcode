// 1009. Complement of Base 10 Integer

int bitwiseComplement(int n)
{
    int r, sum = 0, iter = 0;
    if (!n)
        return 1;
    while (n)
    {
        printf("%d ", n);
        r = n % 2;
        sum += ((1 - r) << iter);
        iter += 1;
        n >>= 1;
    }
    return sum;
}

// Runtime: 3 ms, faster than 9.57% of C online submissions for Complement of Base 10 Integer.
// Memory Usage: 5.5 MB, less than 76.60% of C online submissions for Complement of Base 10 Integer.