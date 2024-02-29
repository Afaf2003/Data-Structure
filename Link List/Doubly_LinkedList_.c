#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;

NODE *start;

NODE *create(NODE *newnode)
{
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("Enter the number:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
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
        start->prev = temp;
        start = temp;
    }
}
void insertend()
{
    NODE *p, *temp = create(temp);
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}
void insertmid(int index)
{
    NODE *temp = create(temp);
    int i = 1;
    NODE *p, *q;
    p = start;
    while (i != index)
    {
        q = p;
        p = p->next;
        i++;
    }
    temp->next = p;
    q->next = temp;
    p->prev = temp;
    temp->prev = q;
}
void display()
{
    NODE *p;
    if (start == NULL)
    {
        printf("The Linked List has no Elemnts\n");
    }
    else
    {
        printf("The Elements of linked list are\n");
        p = start;
        while (p != NULL)
        {
            printf("%d\n", p->data);
            p = p->next;
        }
    }
}
void deletebeg()
{
    if (start == NULL)
    {
        printf("The Linked List is Empty\n");
    }
    else
    {
        start = start->next;
    }
}
void deleteend()
{
    NODE *p, *q;
    if (start == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        if (start->next == NULL)
        {
            start = NULL;
        }
        else
        {
            p = start;
            while (p->next != NULL)
            {
                q = p;
                p = p->next;
            }
            q->next = NULL;
            p->prev = NULL;
            free(p);
        }
    }
}
void deletemid()
{
    int x;
    NODE *p, *q;
    if (start == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        printf("Enter the number that you wnat to delete :");
        scanf("%d", &x);
        if (start->data == x)
        {
            if (start->next != NULL)
            {
                start->data = start->next->data;
                start->next = NULL;
            }
            else
            {
                start = NULL;
            }
        }
        else
        {
            p = start;
            while (p->data != x)
            {
                q = p;
                p = p->next;
            }
            q->next = p->next;
            p->next = NULL;
            p->next->prev = q;
            free(p);
        }
    }
}
int main()
{
    int c, index;
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