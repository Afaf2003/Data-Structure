#include <stdio.h>
#include <stdlib.h>
int ht[20];
void perfect(int n, int x)
{
    int index;
    index = x % n;
    ht[index] = x;
}
void display(int n)
{
    printf("Index\tValue\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", i, ht[i]);
    }
}
void exit1()
{
    exit(1);
}
int main()
{
    int x, n, c;

    printf("Enter the size of an hash table :");
    scanf("%d", &n);
    while (c != 3)
    {
        printf("Enter\n1.Insertion\n2.Display\n3.Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the value that to be inserted :");
            scanf("%d", &x);
            perfect(n, x);
            break;
        case 2:
            display(n);
            break;
        case 3:
            exit1();
            break;

        default:
            break;
        }
    }
    return 0;
}
