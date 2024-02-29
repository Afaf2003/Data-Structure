#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *NEXT;
};
typedef struct node NODE;

int main()
{
    NODE *temp[10];
    int n;
    printf("Enter the number of nodes :");
    scanf("%d", &n);
    printf("Enter the elements in the list :\n");
    for (int i = 1; i <= n; i++)
    {
        temp[i] = (NODE *)malloc(sizeof(NODE));
        scanf("%d", &temp[i]->data);
        temp[i]->NEXT = NULL;
        temp[i]->NEXT = temp[i + 1];
    }
    printf("********Display the data of list********\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", temp[i]->data);
    }

    return 0;
}