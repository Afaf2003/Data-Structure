#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *NEXT;
};
typedef struct node NODE;
NODE *start, *temp;
void insert(){
    NODE *add;
    add = (NODE *)malloc(sizeof(NODE));
    scanf("%d",&add->data);
    add->NEXT=temp;

}
int main()
{
     
    start = (NODE *)malloc(sizeof(NODE));
    start->data = 10;
    start->NEXT = NULL;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = 20;
    temp->NEXT = NULL;
    start->NEXT = temp;
    printf("%d\t%d", start->data, temp->data);
    return 0;
}