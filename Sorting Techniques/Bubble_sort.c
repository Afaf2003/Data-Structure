#include <stdio.h>
void BubbleSort(int a[], int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
}
int main()
{
    int n, a[10];
    printf("Enter the size of an array :");
    scanf("%d", &n);
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    printf("Elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}