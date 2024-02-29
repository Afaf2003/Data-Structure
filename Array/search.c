#include <stdio.h>
void search(int x, int n, int a[])
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("The element is found at index %d\n", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The element is not found at index\n");
    }
}
int main()
{
    int a[10], n;
    int x;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value that you want to search :\n");
    scanf("%d", &x);
    search(x, n, a);

    return 0;
}