#include <stdio.h>
void func(int a[], int size) // Always it takes address of an array so it is like call by reference
{

    //a[0] = 23; Here there is no use of address of operetor to pass address of an array
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int a[] = {};
    int n = 5;
    func(a, n);

    return 0;
}