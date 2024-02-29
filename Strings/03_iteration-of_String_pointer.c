#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "harry";
    char *p = str;
    while (*p != '\0')
    {
        printf("%c",*p);
        p++;
    }
    
    return 0;
}
