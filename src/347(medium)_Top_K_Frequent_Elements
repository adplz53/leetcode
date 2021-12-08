

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct {
    int value;
    int count;
} Node;

int cmp(const void *a, const void *b) {
    return ((Node*)b)->count - ((Node*)a)->count;
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize){
    int *result = (int*)malloc(k * sizeof(int));
    Node *node = (Node*)calloc(200000, sizeof(Node));
    for (int i=0;i<numsSize;i++){
        // values in nums could be a negative integer,
        // add 100000 to ensure the index greater or equal to zero
        node[nums[i]+100000].value = nums[i];
        node[nums[i]+100000].count += 1;
    }
    qsort(node, 200000, sizeof(Node), cmp);
    for (int i=0; i<k; i++){
        result[i] = node[i].value;
    }
    *returnSize = k;
    return result;
}

// Runtime: 346 ms, faster than 5.00% of C online submissions for Top K Frequent Elements.
// Memory Usage: 62.3 MB, less than 6.00% of C online submissions for Top K Frequent Elements.