#include <stdio.h>
void BianrySearch(int a[], int size, int element)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == element)
        {
            printf("The number %d is found at index %d", element, mid);
        }
        if (a[mid] < element)
        {
            low = mid + 1;
            high = high - 1;
        }
        else
        {
            high = mid - 1;
            low = low + 1;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 55, 67};
    int element = 5;
    int size = sizeof(a) / sizeof(int);
    BianrySearch(a, size, element);
    // printf("The number %d is found at index %d", element, BianrySearch(a, size, element));
    return 0;
}