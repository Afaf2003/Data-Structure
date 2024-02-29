#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r1)
{
    r1.breadth = 4;
    r1.length = 8;
    printf("Length  = %d\nBreadth = %d\n", r1.length, r1.breadth);
}

int main()
{
    struct rectangle r;
    r.breadth = 5;
    r.length = 10;
    fun(r);
    printf("Length  = %d\nBreadth = %d\n", r.length, r.breadth);
    return 0;
}