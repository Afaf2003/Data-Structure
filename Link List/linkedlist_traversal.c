#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start, *temp, *p;

void create()
{
    temp = (NODE *)malloc(sizeof(NODE));
    printf("Enter the value of data :");
    scanf("%d", &temp->data);
    start->next = temp;
    temp->next = NULL;
}
void tranversal()
{
    p = start;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
int main()
{
    start = (NODE *)malloc(sizeof(NODE));
    printf("Enter the value of data of starting Node :");
    scanf("%d", &start->data);
    create();
    tranversal();
    return 0;
}