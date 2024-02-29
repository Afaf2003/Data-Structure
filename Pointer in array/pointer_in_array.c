#include <stdio.h>
#include <stdlib.h>
int *fun(int n)
{

    int *p;
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 2;
    }

    return p;
}
int main()
{
    int size = 5;
    int *ptr = fun(size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}
