#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        // scanf("%d", &p[i]);
    }
    q = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    return 0;
}
