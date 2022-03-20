// 387. First Unique Character in a String

int firstUniqChar(char *s)
{
    int table[26] = {0};
    char *ptr = s;
    while (*ptr)
    {
        table[*ptr - 'a'] += 1;
        ptr++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (table[s[i] - 'a'] == 1)
            return i;
    }
    return -1;
}

// Runtime: 124 ms, faster than 21.84% of C online submissions for First Unique Character in a String.
// Memory Usage: 7.1 MB, less than 39.01% of C online submissions for First Unique Character in a String.