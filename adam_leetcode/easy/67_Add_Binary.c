// 67. Add Binary

char *addBinary(char *a, char *b)
{
    int c = 0, tmp1, tmp2, value;
    int len_a = strlen(a) - 1, len_b = strlen(b) - 1;
    int longer = ((len_a > len_b) ? len_a : len_b);
    char *ret = (char *)malloc(sizeof(char) * (longer + 3));
    ret[longer + 2] = '\0';
    longer = longer + 1;
    while (len_a >= 0 || len_b >= 0 || c != 0)
    {
        tmp1 = (len_a < 0) ? 0 : (a[len_a--] - '0');
        tmp2 = (len_b < 0) ? 0 : (b[len_b--] - '0');
        value = tmp1 + tmp2 + c;
        if (value >= 2)
        {
            value %= 2;
            c = 1;
        }
        else
            c = 0;
        ret[longer--] = value + '0';
        // printf("%d *** %d *** %d\n", tmp1 , tmp2, value);
    }
    ret += longer + 1;
    // printf("longer: %d", longer);
    return ret;
}

// Runtime: 2 ms, faster than 52.02% of C online submissions for Add Binary.
// Memory Usage: 5.7 MB, less than 83.27% of C online submissions for Add Binary.

// logical solution
// value = tmp1 ^ tmp2 ^ c;
// c = (tmp1 & tmp2) | (c & (tmp1 ^ tmp2));