// 344. Reverse String

void reverseString(char *s, int sSize)
{
    char tmp;
    for (int i = 0; i < sSize / 2; i++)
    {
        tmp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = tmp;
    }
}

// Runtime: 48 ms, faster than 91.98% of C online submissions for Reverse String.
// Memory Usage: 12.4 MB, less than 40.70% of C online submissions for Reverse String.