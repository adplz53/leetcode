#include <stdio.h>

void insert_sort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = A[i], j = i - 1;
        while (j >= 0 && value < A[j])
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = value;
    }
}

int main()
{
    int A[] = {5, 3, 4, 2, 1};
    int n = sizeof(A) / sizeof(int);
    insert_sort(A, n);
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]");

    return 0;
}