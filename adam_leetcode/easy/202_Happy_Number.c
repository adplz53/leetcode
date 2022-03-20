// 202. Happy Number

int get_sum(int v)
{
    int s = 0;
    while (v != 0)
    {
        s += pow(v % 10, 2);
        v /= 10;
    }
    // printf("%d\n", s);
    return s;
}

bool isHappy(int n)
{
    // Floyd Cycle detection algorithm
    int fast = n;
    int slow = n;
    while (true)
    {
        slow = get_sum(slow);
        if (slow == 1)
            return true;
        fast = get_sum(fast);
        fast = get_sum(fast);
        if (slow == fast)
            return false;
    }
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Happy Number.
// Memory Usage: 5.4 MB, less than 68.14% of C online submissions for Happy Number.