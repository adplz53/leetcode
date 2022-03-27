// 762. Prime Number of Set Bits in Binary Representation

int is_prime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

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

int countPrimeSetBits(int left, int right)
{
    int count = 0;
    for (int i = left; i <= right; i++)
    {
        count += is_prime(count_one(i));
    }
    return count;
}

// Runtime: 13 ms, faster than 80.56% of C online submissions for Prime Number of Set Bits in Binary Representation.
// Memory Usage: 5.7 MB, less than 17.59% of C online submissions for Prime Number of Set Bits in Binary Representation.