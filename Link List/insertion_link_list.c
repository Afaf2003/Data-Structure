#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

int main()
{
    NODE *start, *temp, *temp1;
    start = (NODE *)malloc(sizeof(NODE));
    start->data = 10;
    start->next = NULL;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = 20;
    temp->next = NULL;
    start->next = temp;
    // printf("%d",start->data);
    // printf("%d",temp->data);
    temp1 = (NODE *)malloc(sizeof(NODE));
    temp1->data = 40;
    temp1->next = NULL;
    printf("%d\n", start->data);
    if (start == NULL)
    {
        start = temp1;
    }
    else
    {
        temp1->next = start;
        start = temp1;
    }
    printf("new = %d\n", start->data);

    NODE *p;
    p = start;
    while (p->next != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);

    return 0;
}