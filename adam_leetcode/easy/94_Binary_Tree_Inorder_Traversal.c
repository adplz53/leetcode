// 94. Binary Tree Inorder Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void travel(int *ret, struct TreeNode *node, int *size)
{
    if (node->left)
        travel(ret, node->left, size);
    ret[(*size)++] = node->val;
    if (node->right)
        travel(ret, node->right, size);
}

int *inorderTraversal(struct TreeNode *root, int *returnSize)
{
    *returnSize = 0;
    if (!root)
        return NULL;
    int *ret = (int *)malloc(sizeof(int) * (100));
    travel(ret, root, returnSize);
    return ret;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Binary Tree Inorder Traversal.
// Memory Usage: 6.1 MB, less than 17.31% of C online submissions for Binary Tree Inorder Traversal.

// ===== Why the values of ret would be [1,2,-1094795586]?
// void travel(int* ptr, struct TreeNode* node){
//     if (node->left) travel(ptr, node->left);
//     *ptr = node->val;
//     ptr++;
//     if (node->right) travel(ptr, node->right);
// }

// int* inorderTraversal(struct TreeNode* root, int* returnSize){
//     if (!root) return NULL;
//     int* ret = (int*)malloc(sizeof(int)*(100)), *ptr = ret;
//     travel(ptr, root);
//     for (int i=0; i<3; i++) {
//         printf("%d\n", ret[i]);
//     }
//     *returnSize = 3;
//     return ret;
// }