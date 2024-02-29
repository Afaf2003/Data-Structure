#include <stdio.h>
#include <stdlib.h>
struct rectangle
{
    int length;
    int breadth;
};
struct rectangle *fun(struct rectangle *ptr)
{
    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));
    ptr->length = 10;
    ptr->breadth = 10;

    return ptr;
}

int main()
{
    struct rectangle *p = fun(p);
    printf("Length = %d\nBreadth = %d\n", p->length, p->breadth);

    return 0;
}