#include <stdio.h>
void insert(int a[], int n, int value, int pos)
{

    for (int i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = value;
}
int main()
{
    int a[10], x, n;
    int pos;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    printf("Enter the Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Display the Array Elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter the number that is to be added :");
    scanf("%d", &x);
    pos = 5;
    insert(a, n, x, pos);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
