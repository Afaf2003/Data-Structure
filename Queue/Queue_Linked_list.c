#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *front, *temp, *p, *q;
void display()
{
    p = front;
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
void insertend()
{
    if (front == NULL)
    {
        front = temp;
    }
    else
    {
        p = front;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
void deletebegin()
{
    if (front == NULL)
    {
        printf("Cannot Dequeue Becase QUeue is already empty\n");
    }
    else
    {
        p = front;
        front = p->next;
        free(p);
    }
}
int main()
{
    int c;
    int index = 0;
    front = (NODE *)malloc(sizeof(NODE));
    printf("Enter the number in the starting linked list :");
    scanf("%d", &front->data);
    front->next = NULL;
    while (c != 8)
    {
        printf("Enter\n1.Enqueue\n2.Display\n3.Dequeue\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            temp = (NODE *)malloc(sizeof(NODE));
            printf("Enter the number that to inserted:");
            scanf("%d", &temp->data);
            insertend();
            break;
        case 2:
            display();
            break;
        case 3:
            deletebegin();
            break;
        }
    }
    return 0;
}
