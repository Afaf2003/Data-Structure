#include <stdio.h>
void Set(int a[], int i, int j, int x)
{
    if (i == j)
    {
        a[i - 1] = x;
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int a[10];
    int n, x[10];
    printf("Enter the number of non zero elements in the matrix :");
    scanf("%d", &n);
    Set(a, 1, 1, 5);
    Set(a, 2, 2, 8);
    Set(a, 3, 3, 9);
    Set(a, 4, 4, 12);

    display(a, n);
    return 0;
}