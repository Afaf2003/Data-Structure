#include <stdio.h>
#include <stdlib.h>
int a[10], n, pos = 0, value = 0;
void insert()
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = value;
    n++;
}
void delete ()
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void search(int x)
{
    int f = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == x)
        {
            printf("The elmenet is found at the index %d\n", i + 1);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("The elmenet is not found\n");
    }
}
void display()
{
    printf("************Display the array************\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
void exit1()
{
    exit(1);
}

int main()
{
    int c;
    int x;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (c != 5)
    {
        printf("Enter 1 for insertion ,2 for deletion, 3 for search ,4 for display and 5 for exit from the array\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the postion in which do you want to insert :");
            scanf("%d", &pos);
            printf("Enter the value that do you want :");
            scanf("%d", &value);
            insert();
            break;
        case 2:
            printf("Enter the postion in which do you want to delete :");
            scanf("%d", &pos);
            delete ();
            break;
        case 3:

            printf("Enter the element in which do you want to search :");
            scanf("%d", &x);
            search(x);
            break;
        case 4:
            display();
            break;
        case 5:
            exit1();
            break;
        }
    }
    return 0;
}
