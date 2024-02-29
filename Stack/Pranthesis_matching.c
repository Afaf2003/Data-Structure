#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *s;
};
typedef struct stack Stacks;
Stacks st;
char expr[20];
void push()
{
    char x;
    if (st.top == st.size - 1)
    {
        printf("The Stacks is full\n");
    }
    else
    {
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
void balence()
{

    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '(')
        {
            push();
        }
        else if (expr[i] == ')')
        {
            if (st.top != -1)
            {
                pop();
            }
            else
            {
                printf("Cannot poped out because STack is empty\n");
            }
        }
    }
    if (st.top == -1)
    {
        printf("Paranthesis are Matched\n");
    }
    else
    {
        printf("Paranthesis not are Matched\n");
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
    printf("Enter the expression :");
    scanf("%c", expr);
    st.size = strlen(expr);
    st.top = -1;
    st.s = (char *)malloc(st.size * sizeof(char));
    balence();
    // while (c != 4)
    // {
    //     printf("Enter\n1. PUSH\n2. POP\n3. Display\n");
    //     scanf("%d", &c);
    //     switch (c)
    //     {
    //     case 1:
    //         push();
    //         break;
    //     case 2:
    //         pop();
    //         break;
    //     case 3:
    //         display();
    //         break;
    //     }
    // }
    return 0;
}