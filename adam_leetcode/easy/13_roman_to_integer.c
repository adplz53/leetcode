// 13. Roman to Integer

int symbol2value(char c)
{
    if (c == 'I')
        return 1;
    else if (c == 'V')
        return 5;
    else if (c == 'X')
        return 10;
    else if (c == 'L')
        return 50;
    else if (c == 'C')
        return 100;
    else if (c == 'D')
        return 500;
    else if (c == 'M')
        return 1000;
    else
        return 0;
}

int romanToInt(char *s)
{
    int value = 0;
    while (*s)
    {
        int temp = 0;
        char *next = s + 1;
        int next_value = symbol2value(*next), current_value = symbol2value(*s);
        if (next_value > current_value)
        {
            temp = next_value - current_value;
            s += 2;
        }
        else
        {
            temp = current_value;
            s++;
        }
        value += temp;
    }
    return value;
}

// Runtime: 8 ms, faster than 56.81% of C online submissions for Roman to Integer.
// Memory Usage: 6 MB, less than 14.71% of C online submissions for Roman to Integer.