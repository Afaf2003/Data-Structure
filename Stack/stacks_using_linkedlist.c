#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;

typedef struct node NODE;

void push()
{
    NODE *t;
    int x;
    t = (NODE *)malloc(sizeof(NODE));
    if (t == NULL)
    {
        printf("The Stack is full\n");
    }
    else
    {
        printf("Enter the number that you want to push :");
        scanf("%d", &x);
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    int x;
    NODE *t;
    t = (NODE *)malloc(sizeof(NODE));
    if (top == NULL)
    {
        printf("The Stack is Empty\n");
        return 0;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
        return x;
    }
}
void display()
{
    NODE *t;
    if (top == NULL)
    {
        printf("The Stack is empty\n");
    }
    else
    {
        printf("The elements Are\n");
        t = top;
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}
int main()
{
    int c;
    while (c != 4)
    {
        printf("Enter\n1. PUSH\n2. POP\n3. Display\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }

    return 0;
}