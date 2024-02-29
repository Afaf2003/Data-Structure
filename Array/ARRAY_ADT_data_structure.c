#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};

int get(struct Array a, int pos)
{
    if (pos >= 0 && pos <= a.length)
    {
        return a.A[pos - 1];
    }
}

void set(struct Array *a, int pos, int x)
{
    if (pos >= 0 && pos <= a->length)
    {
        a->A[pos - 1] = x;
    }
}

int maximum(struct Array a)
{
    int max = a.A[0];
    for (int i = 0; i < a.length; i++)
    {
        if (a.A[i + 1] > max)
        {
            max = a.A[i + 1];
        }
    }
    return max;
}
void insert(struct Array *a, int pos, int x)
{
    if (pos <= a->length)
    {
        for (int i = a->length; i >= pos - 1; i--)
        {
            a->A[i] = a->A[i - 1];
        }
        a->A[pos - 1] = x;
        ++a->length;
    }
    else
    {
        printf("The number cannot be inserted\n");
    }
}

void append(struct Array *a, int x)
{

    a->A[a->length] = x;
    a->length++;
}

void deletion(struct Array *a, int pos)
{
    if (pos <= a->length)
    {
        for (int i = pos - 1; i < a->length; i++)
        {
            a->A[i] = a->A[i + 1];
        }
        a->length--;
    }
    else
    {
        printf("The number cannot be deleted\n");
    }
}

void search(struct Array a, int x)
{
    int f = 0;
    for (int i = 0; i < a.length; i++)
    {
        if (a.A[i] == x)
        {
            printf("The element %d is found at index %d\n", x, i + 1);
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("The element is not found in an array\n");
    }
}
void dispaly(struct Array a)
{

    printf("The elements of an array\n");
    for (int i = 0; i < a.length; i++)
    {
        printf("%d\n", a.A[i]);
    }
}

void exit1()
{
    exit(1);
}

int main()
{
    int n, pos, x;
    struct Array a;
    int c;
    printf("Enter the size of an array :");
    scanf("%d", &a.size);
    a.A = (int *)malloc(a.size * sizeof(int));
    a.length = 0; // Number of elements in the array
    printf("Enter the number of elements :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a.A[i]);
    }
    a.length = n;
    while (c != 5)
    {
        printf("Enter 1 for insertion at perticular index ,2 for insertion at end ,3 for deletion, 4 for display ,5 for exit ,6 for search ,7 for getting an element at perticular index , 8 for set avalue at perticular index ,9 for maximum value in that array\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the position in which you want to insert :");
            scanf("%d", &pos);
            printf("Enter the value :");
            scanf("%d", &x);
            insert(&a, pos, x);
            break;
        case 2:
            printf("Enter the value :");
            scanf("%d", &x);
            append(&a, x);
            break;
        case 3:
            printf("Enter the position in which you want to delete :");
            scanf("%d", &pos);
            deletion(&a, pos);
            break;
        case 4:
            dispaly(a);
            break;
        case 5:
            exit1();
            break;
        case 6:
            printf("Enter the value that to be search :");
            scanf("%d", &x);
            search(a, x);
            break;
        case 7:
            printf("Enter the position at which do you want excess :");
            scanf("%d", &pos);
            printf("The element at %d index is %d\n", pos, get(a, pos));
            break;
        case 8:
            printf("Enter the position at which do you want set a value :");
            scanf("%d", &pos);
            printf("Enter the value :");
            scanf("%d", &x);
            set(&a, pos, x);
            break;
        case 9:
            printf("The maximum value in the array is %d\n", maximum(a));
        default:
            break;
        }
    }
    return 0;
}