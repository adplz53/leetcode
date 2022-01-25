// 9. Palindrome Number

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long int rebuild = 0, count = x;
    while (count)
    {
        rebuild = rebuild * 10 + count % 10;
        count /= 10;
    }
    return (rebuild == x);
}

// Runtime: 4 ms, faster than 93.84% of C online submissions for Palindrome Number.
// Memory Usage: 5.8 MB, less than 95.57% of C online submissions for Palindrome Number.