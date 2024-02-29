#include <stdio.h>
#include <stdlib.h>
#define hashtable_size 10
int ht[100];

void insert(int x)
{
    int index, hash;
    hash = x % 10;
    for (int i = 0; i < hashtable_size; i++)
    {
        index = (hash + i) % hashtable_size;
        if (ht[index] == 0)
        {
            ht[index] = x;
            break;
        }
    }
}

void search(int a)
{
    int c = 0;
    for (int i = 0; i < hashtable_size; i++)
    {
        if (ht[i] == a)
        {
            printf("element found at %d\n", i);
            c = 1;
        }
    }
    if (c == 0)
    {
        printf("element not found\n");
    }
}
void exit1()
{
    exit(1);
}
void display()
{
    printf("Index   Value\n");
    for (int i = 0; i < hashtable_size; i++)
    {
        printf("%d\t%d\n", i, ht[i]);
    }
}
int main()
{
    int c1, b, c;
    while (c1 != 3)
    {
        printf("Enter\n1. for insert\n2. for search\n3. for exit\n4. for display\n");
        scanf("%d", &c1);

        switch (c1)
        {
        case 1:
            b = 0;
            printf("enter a number");
            scanf("%d", &b);
            insert(b);
            break;
        case 2:
            c = 0;
            printf("enter element to be searched");
            scanf("%d", &c);
            search(c);
            break;
        case 3:
            exit1();
            break;
        case 4:
            display();
            break;
        default:
            printf("ERROR IN INPUT");
        }
    }

    return 0;
}