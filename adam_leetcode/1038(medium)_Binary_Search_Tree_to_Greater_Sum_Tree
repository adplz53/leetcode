// 1038. Binary Search Tree to Greater Sum Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int handle(struct TreeNode *node, int base)
{
    if (node == NULL)
        return base;
    node->val += handle(node->right, base);
    return handle(node->left, node->val);
}

struct TreeNode *bstToGst(struct TreeNode *root)
{
    handle(root, 0);
    return root;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Binary Search Tree to Greater Sum Tree.
// Memory Usage: 5.9 MB, less than 71.88% of C online submissions for Binary Search Tree to Greater Sum Tree.