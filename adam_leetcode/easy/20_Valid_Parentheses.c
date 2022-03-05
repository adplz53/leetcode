// 20. Valid Parentheses

bool isValid(char *s)
{
    int count = 0, len = strlen(s);
    char *stack = calloc(len, sizeof(char));
    while (*s)
    {
        // printf("%c", *s);
        if (
            *s == '(' ||
            *s == '[' ||
            *s == '{')
        {
            stack[count] = *s;
            count++;
        }
        else if (count == 0)
            return false;
        else
        {
            count--;
            switch (*s)
            {
            case (')'):
                if (stack[count] != '(')
                    return false;
                break;
            case (']'):
                if (stack[count] != '[')
                    return false;
                break;
            case ('}'):
                if (stack[count] != '{')
                    return false;
                break;
            }
        }
        s++;
    }
    if (count != 0)
        return false;
    return true;
}

// Runtime: 1 ms, faster than 44.31% of C online submissions for Valid Parentheses.
// Memory Usage: 5.8 MB, less than 39.47% of C online submissions for Valid Parentheses.