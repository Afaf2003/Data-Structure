#include <stdio.h>
#include <stdlib.h>
struct Binary
{
    int *A;
    int size;
    int length;
};

void binary(struct Binary a, int x)
{
    int low = 0, high = a.length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a.A[mid] == x)
        {
            printf("The elment %d is found at index %d ", a.A[mid], mid + 1);
        }
        if (a.A[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    struct Binary a;
    int n, x;
    printf("Enter the size of an array :");
    scanf("%d", &a.size);
    a.length = 0;
    a.A = (int *)malloc(a.size * sizeof(int));
    printf("Enter the number of elements in an array :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a.A[i]);
    }
    a.length = n;
    printf("Enter the value that to be search :");
    scanf("%d", &x);
    binary(a, x);

    return 0;
}