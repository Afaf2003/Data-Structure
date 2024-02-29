#include <stdio.h>
void SelectionSort(int a[], int n)
{
    int min, t;
    for (int j = 0; j < n; j++)
    {
        min = j;
        for (int i = j + 1; i < n; i++)
        {
            if (a[i] < a[min])
            {
                min = i;
            }
        }
        t = a[min];
        a[min] = a[j];
        a[j] = t;
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
    SelectionSort(a, n);
    printf("Elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}