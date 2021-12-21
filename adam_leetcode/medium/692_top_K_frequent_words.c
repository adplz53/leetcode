// 692. Top K Frequent Words

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <string.h>

typedef struct
{
    char *key;
    int count;
} Node;

Node *get_node(Node *dict, int size, char *key)
{
    for (int i = 0; i < size; i++)
    {
        printf("index = %d, key = %s, count = %d\n", i, dict[i].key, dict[i].count);
        if (strcmp(dict[i].key, key) == 0)
            return &dict[i];
    }
    return NULL;
}

int compare_node(void *a, void *b)
{
    Node *node_a = (Node *)a;
    Node *node_b = (Node *)b;
    int result = node_b->count - node_a->count;
    if (result == 0)
    {
        result = strcmp(node_a->key, node_b->key);
    }
    return result;
}

char **topKFrequent(char **words, int wordsSize, int k, int *returnSize)
{
    char **result = (char **)malloc(sizeof(char *) * k);
    Node *dict = (Node *)calloc(500, sizeof(Node));
    int dict_size = 0;

    for (int i = 0; i < wordsSize; i++)
    {
        printf("case: %s\n", words[i]);
        Node *node = get_node(dict, dict_size, words[i]);
        //printf("%s\n", words[i]);
        if (!node)
        {
            Node node;
            node.key = words[i];
            node.count = 1;
            dict[dict_size] = node;
            dict_size += 1;
        }
        else
        {
            node->count += 1;
        }
        //printf("%s", *words[i]);
    }
    qsort(dict, dict_size, sizeof(Node), compare_node);
    for (int i = 0; i < k; i++)
    {
        result[i] = dict[i].key;
    }
    *returnSize = k;
    return result;
}

// Runtime: 80 ms, faster than 16.67% of C online submissions for Top K Frequent Words.
// Memory Usage: 8.4 MB, less than 16.67% of C online submissions for Top K Frequent Words.