#include <stdio.h>
void delete (int n, int a[], int pos)
{
    for (int i = pos - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}
int main()
{
    int a[10], n;
    int pos = 0;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the postion which do you want to delete :");
    scanf("%d", &pos);
    delete (n, a, pos);
    printf("Display the elemnets of an array \n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}