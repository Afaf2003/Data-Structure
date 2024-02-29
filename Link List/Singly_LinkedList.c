#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start;
NODE *create(NODE *n)
{
    n = (NODE *)malloc(sizeof(NODE));
    printf("Enter the value :");
    scanf("%d", &n->data);
    n->next = NULL;
    return n;
}

void display()
{
    NODE *p;
    p = start;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
void insertbeg()
{
    NODE *temp = create(temp);
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
void insertend()
{
    NODE *p;
    NODE *temp = create(temp);
    p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
}
void insertmid(int index)
{

    int i = 1;
    NODE *p, *q, *temp;
    temp = create(temp);
    p = start;
    while (i != index)
    {
        q = p;
        p = p->next;
        i++;
    }
    temp->next = p;
    q->next = temp;
}
void deletebeg()
{
    NODE *p;
    p = start;
    start = p->next;
    free(p);
}
void deleteend()
{
    NODE *p, *q;
    p = start;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
    }
    q->next = NULL;
    free(p);
}
void deletemid()
{
    NODE *p, *q;
    int x;
    printf("Enter the value that you to delete :");
    scanf("%d", &x);
    p = start;
    while (p->data != x)
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    p->next = NULL;
    free(p);
}
int main()
{
    int c, index = 0;
    start = create(start);
    while (c != 8)
    {
        printf("Enter\n1. Insertion at the begining\n2. Insertion at end\n3. Insertion at the middle\n4. Display\n5. Delete at begining\n6. Delete at end\n7. Deletion at middle\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertend();
            break;
        case 4:
            display();
            break;
        case 3:
            printf("Enter the position at which do you want to insert :");
            scanf("%d", &index);
            insertmid(index);
            break;
        case 5:
            deletebeg();
            break;
        case 6:
            deleteend();
            break;
        case 7:
            deletemid();
            break;
        }
    }
    return 0;
}