// 191. Number of 1 Bits

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n)
    {
        count += n % 2;
        n /= 2;
    }
    return count;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Number of 1 Bits.
// Memory Usage: 5.5 MB, less than 53.13% of C online submissions for Number of 1 Bits.