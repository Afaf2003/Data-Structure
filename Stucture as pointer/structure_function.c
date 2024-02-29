#include <stdio.h>
struct rectangle
{
    int l;
    int b;
};
void initialize(struct rectangle *r)
{
    r->l = 10;
    r->b = 5;
    printf("Length = %d\nBreadth = %d\n", r->l, r->b);
}
void area(struct rectangle *r)
{
    printf("Area = %d\n", (r->l) * (r->b));
}
void change(struct rectangle *r)
{

    scanf("%d%d", &r->l, &r->b);
    printf("Length = %d\nBreadth = %d\n", r->l, r->b);
}
int main()
{
    struct rectangle *r;
    initialize(r);
    area(r);
    change(r);
    return 0;
}