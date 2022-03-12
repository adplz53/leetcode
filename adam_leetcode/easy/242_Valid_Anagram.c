// 242. Valid Anagram

bool isAnagram(char *s, char *t)
{
    int lens = strlen(s), lent = strlen(t);
    if (lens != lent)
        return false;
    int count[26] = {0};
    for (int i = 0; i < lens; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}

// Runtime: 8 ms, faster than 33.54% of C online submissions for Valid Anagram.
// Memory Usage: 5.8 MB, less than 67.09% of C online submissions for Valid Anagram.