// 104. Maximum Depth of Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    struct TreeNode *ptr = root;
    int height = 1;
    if (ptr->left || ptr->right)
    {
        int lh = 0, rh = 0, higher;
        if (ptr->left)
            lh = maxDepth(ptr->left);
        if (ptr->right)
            rh = maxDepth(ptr->right);
        higher = (lh > rh) ? lh : rh;
        height += higher;
    }
    return height;
}

// Runtime: 6 ms, faster than 61.78% of C online submissions for Maximum Depth of Binary Tree.
// Memory Usage: 8.1 MB, less than 11.15% of C online submissions for Maximum Depth of Binary Tree.