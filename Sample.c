#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start;

typedef struct node NODE;

NODE * create(NODE *n){
    n = (NODE*)malloc(sizeof(NODE));
    printf("Enter the Value :");
    scanf("%d", &n->data);
    n->next = NULL;
    return n;
}

void insertmid(int index){
    NODE *p, *q;
    int i = 1;
    p = start; 
    NODE *temp = cretae(temp);
    while(i<=index){
        q = p;
        p = p->next;
        i++;
    }
    q->next = temp;
    temp->next = p;
}

void delete(){
    NODE *p, *q;
    int x;
    printf("Enter the value that you want to delete :");
    scanf("%d",&x);
    p = start;
    while(p->data != x){
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
