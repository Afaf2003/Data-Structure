#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
typedef struct stack Stacks;
Stacks st;
void create()
{
    printf("Enter the size of the stack :");
    scanf("%d", &st.size);
    st.top = -1;
    st.s = (int *)malloc(st.size * sizeof(int));
}
void push()
{
    int x;
    if (st.top == st.size - 1)
    {
        printf("The Stacks is full\n");
    }
    else
    {
        printf("Enter the value that you want to push :");
        scanf("%d", &x);
        st.top++;
        st.s[st.top] = x;
    }
}
int pop()
{
    int x;
    if (st.top == -1)
    {
        printf("The Stack is empty\n");
        return 0;
    }
    else
    {
        x = st.s[st.top];
        st.top--;
        return x;
    }
}
void display()
{
    if (st.top == -1)
    {
        printf("The Stack is empty\n");
    }
    else
    {
        printf("The Elements of Stacks are\n");
        for (int i = st.top; i >= 0; i--)
        {
            printf("%d\n", st.s[i]);
        }
    }
}
int main()
{
    int c;
    create();
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