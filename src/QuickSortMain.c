#include <stdio.h>
#include <QuickSort.h>

#define MAX 100

int main()
{
    int arr[] = {7, 4, 2, 1, 8, 3, 0, 9, 5, 6, 1, 2, 3, 9, 4, 0, 9};
    int i;

printf("%d", MAX);
    for (i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nafter\n");

    qisort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

    for (i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");

return 0;
}
