#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p;
    int n;
    printf("Enter The Size of an String :");
    scanf("%d",&n);
    p = (char *)malloc(n*sizeof(char));
    printf("Enter the string :");
    for (int i = 0; i < n; i++)
    {
        scanf("%c",(p+i));
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%c",p[i]);
    }
    return 0;
}
