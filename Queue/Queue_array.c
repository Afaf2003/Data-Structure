#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int *a;
    int size;
    int front;
    int rear;
};
typedef struct queue Queue;
void Enqueue(Queue *q)
{
    int x;
    if (q->rear == q->size - 1)
    {
        printf("The Queue is Full\n");
    }
    else
    {
        printf("Enter the number :");
        scanf("%d", &x);
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->rear++;
        q->a[q->rear] = x;
    }
}
void Dequeue(Queue *q)
{
    if ((q->front == -1 && q->rear == -1) || q->front > q->rear)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        q->front++;
    }
}
void Display(Queue q)
{
    if ((q.front == -1 && q.rear == -1) || q.front > q.rear)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            printf("%d\n", q.a[i]);
        }
    }
}
int main()
{
    int c;
    Queue q;
    printf("Enter the size of the QUEUE :");
    scanf("%d", &q.size);
    q.front = -1;
    q.rear = -1;
    q.a = (int *)malloc(q.size * sizeof(int));
    while (c != 4)
    {
        printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            Enqueue(&q);
            break;
        case 2:
            Dequeue(&q);
            break;
        case 3:
            Display(q);
            break;
        }
    }
    return 0;
}